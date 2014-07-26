#include "print.h"

typedef struct {
    int allocLen;
    int logicLen;
    int elemSize;
    void* target;
} stack;

void stackInit(stack* ps, int initLen, int elemSize); 
void stackPush(stack* ps, void* elem);
void stackPop(stack* ps, void* elemAddr);
void stackDispose(stack* ps);
