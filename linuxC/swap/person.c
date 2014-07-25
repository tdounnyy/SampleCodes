#include "person.h"

void* initPerson(person* p, char* n, char* g, int a, char* birth) {
    print("initPerson");
    p->name = n;
    p->gender = g;
    p->age = a;
    p->birthday = birth;
    printPerson(p);
    return;
}

void printPerson(person* p) {
    printf("printPerson: %s\t%s\t%d\t%s\n", p->name, p->gender, p->age, p->birthday);
    return;
}
