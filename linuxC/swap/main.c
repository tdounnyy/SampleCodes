#include <stdio.h>
#include <stdlib.h>
#include "person.h"
#include "stack.h"

void main() {
    printf("hello print person\n");

    person *p1 = malloc(sizeof(person));
    person *p2 = malloc(sizeof(person));

    initPerson(p1, "Kyle", "M", 30, "1042-66-1");
    initPerson(p2, "Padma", "M", 21, "1235-6-1");

    printPerson(p1);
    printPerson(p2);

    stack* stk = malloc(sizeof(stack));
    stackInit(stk, 4, sizeof(*p1));
    return;
}
