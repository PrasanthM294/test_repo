#include <stdio.h>
#include <time.h>

int main()
{
	clock_t start,end;
	start = clock();
	
	//start_t = time(NULL);

	for (long i=0; i<=1000000; i++) {
		printf("\n Running.. %ld", i);
	}

	end = clock();


	double diff = end - start;
	
	printf("\n\n\n time taken in ms: %ld", diff);

	return 0;

}

