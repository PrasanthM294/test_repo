#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int main(int argc, char* argv[] )
{

	char* filename = argv[1];
	char buf[100];
	unsigned long count = 0;
	FILE *file_f;

	if (argc < 2) {
		printf("\n Error! enter a file name");
		return 0;
	}


	if (filename != NULL) {
		file_f = fopen( filename, "r");
	}
	else
	{
		printf("\n file error");
		return 0;
	}
	

	while ( (count = fread(buf, sizeof(char), 100, file_f) > 0 ) )
 	{
		printf("%s",buf);
	}

	fclose(file_f);
	return 0;
}
