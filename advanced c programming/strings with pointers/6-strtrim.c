#include<stdio.h>
char * rmspace(char *);
int main()
{
char str[]="  str str  ";
char *ptr;
ptr=rmspace(str);
printf("%s",ptr);

}
char *  rmspace(char *ptr)
{
int i,j=0;
char *ptr2=ptr,*ptr3=ptr2;
for(;*ptr!='\0';)
{
        if((*ptr!=' ')||((*(ptr+1)!=' ')&&(*(ptr-1)!=' ')))
        {
                *ptr2=*ptr;
                ptr2++;

        }
                ptr++;


}
*ptr2='\0';
return ptr3;
}
                                                                                                                      52,0-1        Bot

