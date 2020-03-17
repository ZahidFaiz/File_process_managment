	#include <sys/types.h>
	#include<stdio.h>
       #include <sys/stat.h>
       #include <fcntl.h>
 int main ()
 { 
	int fd=creat("file5",00700);
	creat("file6",00700);
	creat("file7",00700);
	creat("file8",0744);
	creat("file9",0744);
	creat("file10",0744);
	open("file8",O_EXCL);
	printf("fd %d\n",fd);
	return 0;
}

