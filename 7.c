#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
void main()
{
char buff[100];
int fd;
fd= open("test.txt",S_IRUSR);
printf("fd %d \n",fd);
int fd1=creat("test2.txt",00070);
printf("fd1 %d\n",fd1);
int sz=read(fd,buff,100);
write(fd1,buff,sz);
}
