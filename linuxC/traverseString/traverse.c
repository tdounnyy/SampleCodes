#include <stdio.h>

// recursive test every bit of a string is between 0-9
int isDigit(char *cp) {
	if (*cp == '\0') return 1;
	else if (*cp > '9' || *cp < '0') return 0;
	else return (isDigit(++cp));
}

// traverse print string
void traversePrint(char *cp) {
	if (*cp == '\0') return;
	else {
		printf("%c\n", *cp);
		traversePrint(++cp);
	}
}

void main(int argc, char *argv[]) {
	printf("traverse\n");

	if (argc != 2) return;

	char *cp, *cp2, *cp3;
	cp = cp2 = cp3 = argv[1];

	// while traverse
	while (*cp != '\0') {
		printf("*cp= %c\n", *cp);
		cp++;
	}
	
	printf("\ncp2:\n");
	// recursion traverse
	traversePrint(cp2);

	if (isDigit(cp3))
		printf("\narg is positive int\n");
	else
		printf("\narg is not positive int\n");
	return;
}
