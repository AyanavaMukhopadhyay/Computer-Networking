#include<stdio.h>
void main()
{int Y= 0x12341244;
unsigned char a,b,c,d;
printf("Y=%x\n",Y);
a=Y&0xFF;
b=(Y>>8)&0xFF;
c=(Y>>16)&0xFF;
d=(Y>>24)&0xFF;
printf("a=%X\n",a);
printf("b=%X\n",b);
printf("c=%X\n",c);
printf("d=%X",d);
}
