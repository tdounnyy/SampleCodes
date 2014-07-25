#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void* initPerson(person* p, char* n, char* g, int a, char* birth) {
    p->name = n;
    p->gender = g;
    p->age = a;
    p->birthday = birth;
    return;
}


void printPerson(person* p) {
    printf("%s\t%s\t%d\t%s\n", p->name, p->gender, p->age, p->birthday);
    return;
}

void main() {
    printf("hello print person\n");

    person *p1 = malloc(sizeof(person));
    person *p2 = malloc(sizeof(person));

    initPerson(p1, "Kyle", "M", 30, "1042-66-1");
    initPerson(p2, "Padma", "M", 21, "1235-6-1");

    printPerson(p1);
    printPerson(p2);
    return;
}
