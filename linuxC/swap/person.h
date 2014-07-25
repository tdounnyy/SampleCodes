#include "print.h"

typedef struct {
    char* name;
    char* gender;
    char* birthday;
    char* passwd;
    int age;
} person;

void printPerson(person* p);
void * initPerson(person* p, char* n, char* g, int a, char* birth);
