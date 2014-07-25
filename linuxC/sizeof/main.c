#include <stdio.h>
#include <stdlib.h>

// secquence of elements of a struct affect it`s sizeof
// because of MEMORY ALIGNMENT
typedef struct {
    int a;
    char b;
    short c;
    int d;
} blobA;

typedef struct {
    char b;
    int a;
    short c;
    int d;
} blobB;

void main() {
    printf("sizeof(int) = %ld\n", sizeof(int)); // 4
    printf("sizeof(char) = %ld\n", sizeof(char)); // 1
    printf("sizeof(short) = %ld\n", sizeof(short)); // 2

    blobA* ap;
    ap = malloc(sizeof(*ap));
    ap->a = 10;
    blobB* bp;
    printf("sizeof(blobA) = %ld\n", sizeof(blobA)); // 12
    printf("sizeof(blobB) = %ld\n", sizeof(blobB)); // 16
    printf("sizeof(ap) = %ld\n", sizeof(*ap)); // 8
    printf("ap->a = %d\n", ap->a); // 10
    printf("sizeof(bp) = %ld\n", sizeof(*bp)); // 8

    int* ip;
    printf("sizeof(ip) = %ld\n", sizeof(ip)); // 8
    printf("sizeof(*ip) = %ld\n", sizeof(*ip)); // 4
    return;
}
