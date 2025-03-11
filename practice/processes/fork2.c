#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t child_pid;

	printf("\n The main program process id is %d", getpid());

	//create fork
	child_pid = fork();
	
	if (child_pid != 0)
	{
		printf("\n Parent is executing, \n PID = %d\n", getpid());
	}

	else 
	{
		printf("\n Child is executing, \n PID = %d\n", getpid());
	}
	
	return 0;
}

