#include <stdio.h>
#include <pthread.h>

/*
 * by using threads the time taken can be 
 * reduced from 2 seconds to XXX seconds 
*/

void* function1(void* val);

int main()
{
	pthread_t thread1, thread2;
	long value1 = 1;
	long value2 = 2;

	//function1((void*) &value1);
	//function1((void*) &value2);
	
	pthread_create(&thread1, NULL, function1, &value1);
	pthread_create(&thread2, NULL, function1, &value2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	return 0;
}

void* function1(void* val)
{
	long* value = (long*) val;
	long sum = 0;

	for (long i=0; i<=200000000; i++)
		sum += (*value);

	printf("\n sum result %ld \n", sum);
	
	return NULL;
}

