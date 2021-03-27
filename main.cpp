#include <iostream>
#include <curses.h>
int main() {
    initscr();
    refresh();
    getch();
    endwin();

}
