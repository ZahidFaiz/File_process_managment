 #include <unistd.h>
int main(int argc,char *argv[] )

{
	execl (argv[1],argv[2],(char *) NULL);
	return 0;
}
	
