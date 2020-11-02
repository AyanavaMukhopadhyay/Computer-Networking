#include<stdio.h>
#include<string.h>
struct pkt{
char ch1,ch3;
char ch2[2];
};
int main()
{unsigned int x;
printf("Enter a hexadecimal number:\n");
scanf("%x",&x);
struct pkt nono;
printf("x= %x\n",x);
nono.ch1=x&0xFF;
nono.ch2[0]=(x>>8)&0xFF;
nono.ch2[1]=(x>>16)&0xFF;
nono.ch3=(x>>24)&0xFF;
printf("ch1= %X\n",nono.ch1);
printf("ch2[1]= %X\n",nono.ch2[0]);
printf("ch2[2]= %X\n",nono.ch2[1]);
printf("ch3= %X\n",nono.ch3);
printf("%x%x%x%x\n",nono.ch3,nono.ch2[1],nono.ch2[0],nono.ch1);
return 0;
}
