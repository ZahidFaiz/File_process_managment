#include<stdio.h> 
#include<fcntl.h> 
int main()
{
int i=0,fd;
char ch,buff[100];
fd=open("test.txt",O_RDONLY);
while(read(fd, &ch , 1))
	{
	if(ch=='\n')
		{ buff[i]='\0';
		printf("%s\n",buff);
		i=0;
		}
	else 
	{buff[i++]=ch;
	}
	}
return 0;
}
