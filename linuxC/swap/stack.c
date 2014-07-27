#include "stack.h"

void stackGrow(stack* ps) {
    int newSize = ps->allocLen*2;
    ps->target = realloc(ps->target, ps->elemSize * newSize);
    ps->allocLen = newSize;
    printf("stackGrow %d to %d\n", ps->logicLen, ps->allocLen);
}

//void stackInit(stack* ps, int initLen, int elemSize) {
void stackInit(stack* ps, int initLen, int elemSize, void (*printfun)(void *), void (*freefun)(void *)) {
    ps->allocLen = initLen;
    ps->logicLen = 0;
    ps->elemSize = elemSize;
    ps->target = malloc(initLen * elemSize);
    assert(ps->target != NULL);
    ps->printfun = printfun;
    ps->freefun = freefun;
    
    printf("stackInit: allocLen = %d, logicLen = %d, elemSize = %d\n",
        ps->allocLen, ps->logicLen, ps->elemSize);
}

void stackPush(stack* ps, void* elem) {
    if (ps->logicLen == ps->allocLen)
        stackGrow(ps);
    printf("stackPush ");
    ps->printfun(elem);
    void* p = (char *)ps->target + ps->logicLen * ps->elemSize;
    memcpy(p, elem, ps->elemSize);
    ps->logicLen++;
}

void stackPop(stack* ps, void* elemAddr) {
    if (ps->logicLen == 0) {
        elemAddr = NULL;
        return;
    }
    ps->logicLen --;
    void *p = (char *)ps->target + ps->logicLen * ps->elemSize;
    memcpy(elemAddr, p, ps->elemSize);
    printf("stackPop ");
    ps->printfun(p);
    return ;
}

void stackDispose(stack* ps) {
    // TODO free every stack elem
    int n;
    void* elem = NULL;
    for (n = ps->logicLen -1; n>=0; n--) {
        elem = (char *)ps->target + ps->elemSize * n;
        ps->freefun(elem);
        ps->logicLen--;
    }
    // then, free the stack
    free(ps->target);
    free(ps);
}
