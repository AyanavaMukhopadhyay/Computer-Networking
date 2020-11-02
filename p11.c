#include<stdio.h>
void main()
{int x,y,*a,*b,temp;
printf("Enter the values:\n");
scanf("%d%d",&x,&y);
printf("Before swapping \nx: %d \ny: %d\n",x,y);
a=&x; b=&y;
temp=*b;
*b=*a;
*a=temp;
printf("After Swapping \nx: %d \ny: %d\n",x,y);
}
