typedef struct {
    char* name;
    char* gender;
    int age;
    char* birthday;
} person;

void * initPerson(person* p, char* n, char* g, int a, char* birth);
