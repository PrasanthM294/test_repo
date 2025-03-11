#include <stdio.h>
#include <unistd.h>

int main() 
{

	//only parent process is present here
	printf("\n Fork demostration\n");

	//now parent process creates fork / duplicates
	fork();
	//now we have two process Parent and Child
	//BOTH will execute all below lines
	//thats why Hello World is printed twice 
	printf("\n Hello World\n");


	
	return 0;
}
