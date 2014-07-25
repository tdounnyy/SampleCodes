#include "print.h"

typedef struct {
    char* name;
    char* gender;
    int age;
    char* birthday;
    char* passwd;
    int a;
    int b;
    int c;
    int d;
} person;

void printPerson(person* p);
void * initPerson(person* p, char* n, char* g, int a, char* birth);
