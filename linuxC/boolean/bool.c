#include <stdio.h>

void test(int n) {
	printf ("n = %d is ",n);
	if (n) printf("true\n");
	else printf("false\n");
}

void main(int argc, char *argv[]) {
	printf("hello world\n");
	
	int n = 0;
	test(n);
	n = 1;
	test(n);
	n = 10;
	test(n);
	n = -1;
	test(n);
	n = -10;
	test(n);

	return;
}
