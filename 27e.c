 #include <unistd.h>
#include <unistd.h>
#include<stdlib.h>

void main()
{
	char *command[6]= {"ls", "-Rl"};
	//char *command1="-Rl";
	execvp ("/bin/ls", command);
}

