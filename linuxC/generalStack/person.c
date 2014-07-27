#include "person.h"

void printPerson(void* p) {
    person* ps = (person*)p;
    printf("printPerson: %s\t%s\t%d\t%s\n", ps->name, ps->gender, ps->age, ps->birthday);
    return;
}

void freePerson(void* p) {
    printf("freePerson\n");
}

void* initPerson(person* p, char* n, char* g, int a, char* birth) {
    printf("initPerson ");
    p->name = n;
    p->gender = g;
    p->age = a;
    p->birthday = birth;
    printPerson(p);
    return;
}
