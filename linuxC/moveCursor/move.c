#include <unistd.h>
#include <stdlib.h>
#include <curses.h>

int main() {
    initscr();
    printf("hello move\n");
    endwin();
    exit(EXIT_SUCCESS);
}
