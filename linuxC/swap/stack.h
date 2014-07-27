#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "print.h"

typedef struct {
    int allocLen;
    int logicLen;
    int elemSize;
    void* target;
    void (*printfun)(void*);
    void (*freefun)(void*);
} stack;

void stackInit(stack* ps, int initLen, int elemSize, void (*printfun)(void *), void (*freefun)(void *)); 
void stackPush(stack* ps, void* elem);
void stackPop(stack* ps, void* elemAddr);
void stackDispose(stack* ps);
