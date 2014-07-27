#include "print.h"

typedef void(*FUN)(void *);
typedef struct {
    char* name;
    char* gender;
    char* birthday;
    char* passwd;
    int age;
} person;

void printPerson(void* p);
void freePerson(void* p);
void* initPerson(person* p, char* n, char* g, int a, char* birth);
