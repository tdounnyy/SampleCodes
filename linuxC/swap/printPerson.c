#include <stdio.h>
#include "person.h"

void * initPerson(person* p, char* n, char* g, int a, char* birth) {
    p->name = n;
    p->gender = g;
    p->age = a;
    p->birthday = birth;
}


void main() {
    printf("hello print person\n");

    char* name = "kyle";
    char* gender = "M";
    int age = 30;
    char* birthday = "1092-5-21";
    printf("%s\n",name);
    person *p1 = malloc(sizeof(person));
    initPerson(p1, name, gender, age, birthday);
    //p1->name = s;
    //*p1->gender = "M";
    //p1->age = 30;
    //*p1->birthday = "1978-2-41";
    printf("%s\n", p1->name);
    printf("%s\n", p1->gender);
    printf("%d\n", p1->age);
    printf("%s\n", p1->birthday);
    return;
}
