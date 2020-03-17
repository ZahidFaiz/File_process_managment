#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
		

	int main ()
	{ int ret;
	ret=mkfifo("pipe2", 0744);
	perror(" ");
	printf(" ret= %d\n", ret);
	}
//mkfifo pipe2

