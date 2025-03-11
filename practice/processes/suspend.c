#include <stdio.h>
#include <unistd.h>

int main() 
{

	int a=0;
	{
		scanf("%d",&a);
		while (1) 
		{	
			printf("\n Running!");
			sleep(1);
		}

	}
	return 0;
}
