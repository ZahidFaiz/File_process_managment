#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
int main()
 	{
	int fd=open("test.txt",O_RDWR);
	printf("fd1 is: %d \n",fd);
	perror("");
	int fd2;

	fd2=fcntl(fd,F_GETFL);

		int mode2 = fd2 & O_ACCMODE;                     
	if(mode2 == O_RDONLY) 
		printf("read only\n");
	else if(mode2 == O_WRONLY) 
		printf("write only\n");
	else if(mode2 == O_RDWR) 
		printf("read write\n");
	
	}
	
	
