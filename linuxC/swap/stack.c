#include "stack.h"
#include <stdlib.h>
#include <string.h>

void stackInit(stack* ps, int initLen, int elemSize) {
    ps->allocLen = initLen;
    ps->logicLen = 0;
    ps->elemSize = elemSize;
    ps->target = malloc(initLen * elemSize);
    // TODO assert(ps-target != NULL);
    
    printf("stackInit: allocLen = %d, logicLen = %d, elemSize = %d\n",
        ps->allocLen, ps->logicLen, ps->elemSize);
}

void stackPush(stack* ps, void* elem) {
    // TODO
    //if (ps->logicLen == ps->allocLen)
    //    stackGrow();
    printf("stackPush ");
    printPerson(elem);
    void* p = (char *)ps->target + ps->logicLen * ps->elemSize;
    memcpy(p, elem, ps->elemSize);
    ps->logicLen++;
}

void stackPop(stack* ps, void* elemAddr) {
    if (ps->logicLen == 0) {
        elemAddr = NULL;
        return;
    }
    void *p = (char *)ps->target + (ps->logicLen - 1) * ps->elemSize;
    memcpy(elemAddr, p, ps->elemSize);
    ps->logicLen --;
    printf("stackPop ");
    printPerson(p);
    return ;
}

//TODO
void stackDispose(stack* ps){}
