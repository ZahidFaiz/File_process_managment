 #include <unistd.h>
#include <unistd.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void main()
{
	char *command= "ls";
	char *command1="-Rl";

	execlp (command, command, command1, (char *)0);
}
