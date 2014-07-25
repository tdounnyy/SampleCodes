#include "stack.h"
#include <stdlib.h>

void stackInit(stack* ps, int initLen, int elemSize) {
    print("stackInit");
    ps->allocLen = initLen;
    ps->logicLen = 0;
    ps->elemSize = elemSize;
    ps->target = malloc(initLen * elemSize);
    
    printf("allocLen = %d, logicLen = %d, elemSize = %d, target = %ld\n",
        ps->allocLen, ps->logicLen, ps->elemSize, sizeof(ps->target));
}
