#include <stdio.h>
#include <unistd.h>

int main() 
{
	printf("\n the process id is %d",getpid());
	printf("\n the parent process id is %d", getppid());
	return 0;
}
