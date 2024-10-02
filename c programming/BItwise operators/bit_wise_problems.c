// Online C compiler to run C program online
#include <stdio.h>

#define set_bit(x,y) (x | (0x1 << y))
#define clear_bit(x,y) (x & (~(0x1 << y)))
#define toggle_bit(x,y) (x ^ (0x1 << y))

#define check_bit(x,y) (x & (0x1 << y))

#define swap_16_bit_int(x) ((x << 8) | (x >> 8))
#define swap_32_bit_int(x) ((x >> 24) | ((x & 0x00FF0000) >> 8) | ((x & 0x0000FF00) << 8) | (x << 24) )

#define odd_or_even(x) (x & 0x1)

#define swap_2_bits(val,x,y) ((val ))

int main() {
    // Write C code here
    // set a bit in a variable
    int a = 3;
    printf("%d\n",set_bit(a,2));
    printf("%d\n",clear_bit(a,0));
    printf("%d\n",toggle_bit(a,2));
    
    // toggle a range of bits
    for(int i=2;i<4;i++)
    {
        a=toggle_bit(a,i);
    }
    printf("%d\n",a);
    
    // check a bit set or not
    if(check_bit(a,6))
        printf("bit is set\n");
    else
        printf("bit is not set\n");
        
    // swap bytes in 16-bit integer (short)
    short int b = 0x1234;
    b=swap_16_bit_int(b);
    printf("%x\n",b);
    
    int c = 0x12345678;
    c = swap_32_bit_int(c);
    printf("%x\n",c);
    
    // odd or even
    if(odd_or_even(56))
        printf("num is odd\n");
    else
        printf("number is even\n");
    
    // clearing last right set bit in a number    
    int d = 6;
    for(int i=0;i<32;i++)
    {
        if(check_bit(d,i))
        {
            d=clear_bit(d,i);
            break;
        }
    }
    printf("%d\n",d);
    
    // check if a number is power of 2 or not
    int e = 16, count=0;
    for(int i=0;i<32;i++)
    {
        if(check_bit(e,i))
            count++;
        if(count > 1)
        {
            printf("number is not power of 2\n");
            break;
        }
    }
    if(count == 1)
        printf("number is a power of 2\n");
        
    // swap 2 bits at a given position in a integer
    
    return 0;
}
