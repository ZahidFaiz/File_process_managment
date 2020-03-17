	#include <sys/types.h>
	#include<stdio.h>
       #include <sys/stat.h>
       #include <fcntl.h>
 int main ()
 { int fd;
	
	fd=open("file6", O_RDWR | O_EXCL);
	perror(" ");
	printf("fd %d\n",fd);
	return 0;
}

