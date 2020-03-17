 #include <unistd.h>
#include <unistd.h>
#include<stdlib.h>

void main()
{
	//char *command= "/ls";
	char *command1="-Rl";
	char *command2= "/home";

	execl ("/bin/ls","/bin/ls",command1,command2,(char *) NULL);
}
