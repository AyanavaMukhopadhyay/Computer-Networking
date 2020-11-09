#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
int main()
{int fd,res;
fd=socket(AF_INET,SOCK_DGRAM,0);
if(fd==-1)
printf("Socket not created error\n");
else
printf("Socket created successfully\n");
struct sockaddr_in Y;
Y.sin_family=AF_INET;
Y.sin_port=ntohs(6000);
Y.sin_addr.s_addr=INADDR_ANY;
res=bind(fd,(struct sockaddr *)&Y,sizeof(Y));
if(res==-1)
printf("Binding unsuccessful\n");
else
printf("Binding successful\n");
return 0;
}
