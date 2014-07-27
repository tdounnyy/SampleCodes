#include "person.h"
#include "stack.h"

void main() {
    printf("hello print person\n\n");

    person *p1 = malloc(sizeof(person));
    person *p2 = malloc(sizeof(person));
    person *p3 = malloc(sizeof(person));
    person *p4 = malloc(sizeof(person));
    person *p5 = malloc(sizeof(person));
    person *pp = malloc(sizeof(person));
    assert(p1 != NULL && p2 != NULL && pp != NULL);

    initPerson(p1, "Kyle", "M", 30, "1042-66-1");
    initPerson(p2, "Padma", "M", 21, "1235-6-1");
    initPerson(p3, "R2", "R", 9, "1235-6-1");
    initPerson(p4, "Anakin", "M", 21, "1235-6-1");
    initPerson(p5, "C3PO", "M", 21, "1235-6-1");

    stack* sp = malloc(sizeof(stack));
    assert(sp != NULL);
    stackInit(sp, 4, sizeof(*p1), &printPerson, &freePerson);
    stackPush(sp, p1);
    free(p1);
    stackPush(sp, p2);
    free(p2);
    stackPush(sp, p3);
    free(p3);
    stackPush(sp, p4);
    free(p4);
    stackPush(sp, p5);
    free(p5);
    //stackPop(sp, pp);
    //stackPop(sp, pp);
    free(pp);

    stackDispose(sp);
    return;
}
