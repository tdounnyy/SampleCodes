#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void welcome() {
    printf("Welcome to sinking boat, traveller!\nI`m Felix`s talk machine\n");
    printf("What`s your name?\n");
}

int getName() {
    int match = 0;
    char name = getchar();
    if ((name >= 'a' && name <= 'z')) {
        match = 1;
        printf("Never heard of it, %c\n", name);
    } else {
        match = 0;
        printf("%c, hmm... strange name.\n",name);
    }

    while (getchar()!='\n') {
        printf("processing...\n");
    }
    return match;
}

void main() {
    if (isatty(fileno(stdout))) {
        fprintf(stderr, "Talking to the tty\n");
    } else {
        fprintf(stderr, "Talking to the wall\n");
        exit(1);
    }

    welcome();

    if (getName()) {
        printf("You must come far away, welcome!\n");
        printf("The bar tender silently press a button behind the bar\n");
    } else {
        printf("You must come far away, welcome!\n");
    }
}
