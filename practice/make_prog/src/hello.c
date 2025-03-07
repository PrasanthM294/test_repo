#include <stdio.h>
#include "myprint.h"

#define ERROR_OUT	("Error invalid argument")

int main(int argc, unsigned char *argv[]) {
	
	if (argc < 2) {
		printf(ERROR_OUT);
		return 1;
	}

	print("\n");
	print("\n My program says: \n");
	print(argv[1]);
	print("\n");

	return 0;
}
