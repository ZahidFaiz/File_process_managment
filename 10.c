   	#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
	#include<stdio.h>
void main()
{
int fd;
char buff[40]={"this is a test case \n"};

fd=creat("test_again.txt",S_IRWXU);
printf("%d\n",fd);
write(fd, buff,strlen(buff));
int pos=lseek(fd, 10, SEEK_CUR);
write(fd,buff,strlen(buff));
close(fd);
printf("%d\n",pos);
}


