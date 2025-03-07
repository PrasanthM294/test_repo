#include <stdio.h>
#include <unistd.h>

int main() {
	printf("program started");
	unsigned int i=0;  
	for (;;)
	{
		printf("\ncount = %d", i++);
		//fflush(stdout);
		sleep(1);
	}


	return 0;  
}
