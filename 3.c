	#include <sys/types.h>
	#include<stdio.h>
       #include <sys/stat.h>
       #include <fcntl.h>
 int main ()
 { int fd;
	
	fd=creat("file6",0777);
	perror(" ");
	printf("fd %d\n",fd);
	return 0;
	close(fd);
}

//$ ./a.out
//$ ls -la /proc/$$/fd
