#include "stack.h"
#include <stdlib.h>

void stackInit(stack* ps, int initLen, int elemSize) {
    ps->allocLen = initLen;
    ps->logicLen = 0;
    ps->elemSize = elemSize;
    ps->target = malloc(initLen * elemSize);
    
    printf("stackInit: allocLen = %d, logicLen = %d, elemSize = %d\n",
        ps->allocLen, ps->logicLen, ps->elemSize);
}
