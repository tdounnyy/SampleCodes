#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// max length of absolute path
#define LEN_LIMIT 1024

// help msg
void usage() {
	printf("Usage: up [n]\n");
	printf("an easy way to repeat: cd ..\n");
	printf("  n\tis times to repeat go up\n");
}

// recursive test every bit of a string is between 0-9
int isDigit(char *cp) {
	if (*cp == '\0') return 1;
	else if (*cp > '9' || *cp < '0') return 0;
	else return (isDigit(++cp));
}

// convert int array into int
int a2i(char *p) {
	int i = 0;
	while(*p != '\0') {
		i *=10;
		i += *p - '0';
		p++;
	}
	printf("a2i() result: %d\n", i);
	return i;
}

// go up this much times
void goUp(int level) {
	int i;
	char *pwd = malloc(LEN_LIMIT);
	for( i = 0; i < level; i++) {
		getcwd(pwd, LEN_LIMIT);
		printf("cwd: %s\n", pwd);
		printf("go up\n");
		// abort. It turn`s out you can not change parent`s dir from a child process.
		// cd is a built-in cmd
		chdir("/");
	}
	free(pwd);
}

void main(int argc, char *argv[]) {
	if (argc != 2) {
		usage(); return;
	}

	if (!isDigit(argv[1])) {
		usage(); return;
	} 

	int level = a2i(argv[1]);	
	goUp(level);

	return;
}
