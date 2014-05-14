#include <stdio.h>

void main(int argc, char *argv[]) {
	printf("hello world\n");
	
	int i;
	for( i = 0; i < argc; i++) {
		printf("arg[%d] = %s\n", i, argv[i]);
	}
	return;
}
