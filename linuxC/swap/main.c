#include <stdio.h>
#include <stdlib.h>
#include "person.h"
#include "stack.h"

void main() {
    printf("hello print person\n");

    person *p1 = malloc(sizeof(person));
    person *p2 = malloc(sizeof(person));
    person *pp = malloc(sizeof(person));

    initPerson(p1, "Kyle", "M", 30, "1042-66-1");
    initPerson(p2, "Padma", "M", 21, "1235-6-1");

    stack* sp = malloc(sizeof(stack));
    stackInit(sp, 4, sizeof(*p1));
    stackPush(sp, p1);
    stackPush(sp, p2);
    stackPop(sp, pp);
    stackPop(sp, pp);
    return;
}
