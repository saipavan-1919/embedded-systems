#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/fb.h>
#include <sys/ioctl.h>

int main()
{
	int fd1;
	fd1=open("/dev/fb0",O_RDONLY);
	char name[256]="unknown";
        struct fb_var_screeninfo temp;
	int xres,yres,bpp;
	ioctl(fd1,FBIOGET_VSCREENINFO, &temp);
	xres=temp.xres;
	yres=temp.yres;
	bpp=temp.bits_per_pixel;
	printf("x ressolution = %d\ny resolution = %d\nbits per pixel = %d\n",xres,yres,bpp);
	close(fd1);
	return 0;

}
