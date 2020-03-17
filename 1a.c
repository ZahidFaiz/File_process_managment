#include <stdio.h>
#include <unistd.h>
		

	int main ()
	{ int ret;
	ret=symlink("test", "mysymlink");
	perror(" ");
	printf(" ret= %d\n", ret);
	}
//ln symlink test
