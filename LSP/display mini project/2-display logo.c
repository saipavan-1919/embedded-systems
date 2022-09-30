#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<linux/fb.h>
#include<sys/ioctl.h>
#include<sys/mman.h>
#include<string.h>

int main()
{
	int fd1,fd2,xres,yres,bpp,scsize,linelength,bmpxres,bmpyres;
	unsigned int *a1,*a2,buff[54],position,bmpbpp;
	char *a3,*a4,*a5;
	unsigned char r,g,b,a;


        struct fb_var_screeninfo temp1;
        struct fb_fix_screeninfo temp2;

	struct stat temp3;

	fd1=open("/dev/fb0",O_RDWR);
	if(fd1<0)
	{
		perror("opening fb failed");
		exit(0);
 	}

	ioctl(fd1,FBIOGET_VSCREENINFO,&temp1);
	xres=temp1.xres;
	yres=temp1.yres;
	bpp=temp1.bits_per_pixel;
	scsize=xres*yres*(bpp/8);
	printf("xres of fb=%d\nyres of fb=%d\nbpp of fb=%d\nsize of fb=%d\n",xres,yres,bpp,scsize);

	ioctl(fd1,FBIOGET_FSCREENINFO,&temp2);
	linelength=temp2.line_length;
	printf("line length of fb=%d\n",linelength);

	a1=(unsigned int *)mmap(0,linelength*yres,PROT_WRITE|PROT_READ,MAP_SHARED,fd1,0);
	if(a1==(void *)-1)
	{
		perror("mapping of fb failed");
		exit(0);
	}
	a2=a1;
	
	fd2=open("/home/km/Downloads/km32.bmp",O_RDONLY);
	if(fd2<0)
	{
		perror("open bmp file fails\n");
		exit(0);
	}

	fstat(fd2,&temp3);
	printf("size of bmp file=%lu\n",temp3.st_size);

	a3=(char *)mmap(0,temp3.st_size,PROT_READ,MAP_SHARED,fd2,0);
	if(a3==(void *)-1)
	{
		perror("mapping of bmp file failed");
		exit(0);
	}
	a4=a3;
	a5=a3;

	for(int i=0;i<54;i++)
	{
		buff[i]=*a4;
	//	printf("%X\n",buff[i]);
		a4++;
	}
	if(buff[0]=='B'&& buff[1]=='M')
	{
		printf("it is a bmp file\n");
		position=(buff[10])+(buff[11]<<8)+(buff[12]<<16)+(buff[13]<<24);
		bmpxres=(buff[18])+(buff[19]<<8)+(buff[20]<<16)+(buff[21]<<24);
		bmpyres=(buff[22])+(buff[23]<<8)+(buff[24]<<16)+(buff[25]<<24);
		bmpbpp=(buff[28])+(buff[29]<<8);
		printf("position of pixel array=%u\n",position);
		printf("width of bmp file=%d\nlength of bmp file=%d\nbpp of bmp file=%u\n",bmpxres,bmpyres,bmpbpp);
	}
	else
	{
		printf("it is not a bmp file\n");
		exit(0);
	}
	

	if((xres!=bmpxres)&&(yres!=bmpyres)&&(bpp!=bmpbpp))
	{
		printf("the file dimensions are not equal to the fb dimensions\n");
		exit(0);
	}

	a3=a3+position;

	for(int i=bmpyres-1;i>=0;i--)
	{
		for(int j=0;j<bmpxres;j++)
		{
			b=a3[0];
			g=a3[1];
			r=a3[2];
			a=a3[3];
			a3 +=4;
			a2[i*(linelength/4)+j]=(b|(g<<8)|(r<<16)|(a<<24));
		}
	}
	close(fd1);
	close(fd2);
	munmap(a1,linelength*yres);
	munmap(a5,temp3.st_size);
	return 0;
}
