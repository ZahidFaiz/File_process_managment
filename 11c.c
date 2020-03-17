#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
int main()
 	{
	int fd=open("test.txt",O_RDWR);
	char buff[50];
	printf("fd1 is: %d \n",fd);
//perror("");
	int fd2;
	fd2=fcntl(fd,F_DUPFD);
	printf("fd2 is : %d \n",fd2);
	
	int pos=lseek(fd, 0, SEEK_END);
write(fd2,"abc",3);
write(fd,"not my fault",12);
	}
	
	
