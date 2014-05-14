#include <stdio.h>

void printArgs(int argc, char *argv[]) {
	int i;
	for( i = 0; i < argc; i++) {
		printf("arg[%d] = %s\n", i, argv[i]);
	}
}

void main(int argc, char *argv[]) {
	printf("hello world\n");
	
	printArgs(argc, argv);
	return;
}
