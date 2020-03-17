 #include <unistd.h>
#include <unistd.h>
#include<stdlib.h>

void main()
{
	char *command= "/ls";
	char *command1="-Rl";
	execle ("/bin/ls", command, command1, (char *)NULL);
}

