#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
int sz;
char buff[50];
sz=read(0,buff,50);
write(1,buff,sz);

printf("read and write success\n");
return 0;
}
