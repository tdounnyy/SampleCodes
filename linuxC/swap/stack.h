#include "print.h"

typedef struct {
    int allocLen;
    int logicLen;
    int elemSize;
    void* target;
} stack;

void stackInit(stack* ps, int initLen, int elemSize); 
