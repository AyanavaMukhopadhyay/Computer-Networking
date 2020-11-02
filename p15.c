#include<stdio.h>
int main()
{unsigned int i,b0,b1,b2,b3,n;
printf("Enter a hexadecimal number:\n");
scanf("%x",&i);
char *c=(char*)&i;
b0 = (i & 0xFF) << 24u;
b1 = (i & 0x0000ff00) << 8u;
b2 = (i & 0x00ff0000) >> 8u;
b3 = (i & 0xff000000) >> 24u;
n=b0 | b1 | b2 | b3;
if(*c==(i&0xFF))
{printf("The Machine uses Little Endian\n");
 printf("Comversion into Big Endian\n");
 printf("The Big Endian form is %x\n",n);
}
else
{printf("The Machine uses Big Endian\n");
 printf("Comversion into Little Endian\n");
 printf("The Little Endian form is %x\n",n);
}
return 0;
}
