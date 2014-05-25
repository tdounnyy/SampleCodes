#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define MB (1024*1024)
#define PHY_MEM_MB (6 * 1024)
int main() {
    char * BUFF = "haa";
    size_t size_to_allocate = MB;
    int mb_obtained = 0;

    // eat some memmory
    while (mb_obtained < PHY_MEM_MB * 2) {
        BUFF = (char *) malloc(size_to_allocate);
        if (BUFF != NULL) {
            mb_obtained++;
            sprintf(BUFF, "use the memery\n");
            printf("%s - now allocated %d Mega bytes\n", BUFF, mb_obtained);
        } else {
            exit(EXIT_FAILURE);
        }
    }
    exit(EXIT_SUCCESS);
}
