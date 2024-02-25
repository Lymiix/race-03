#include "../inc/matrix_rain.h"

WINDOW *screensaver_new(int argc) {
    if(argc > 2) {
        mx_printerror("usage: ./matrix_rain [-s]\n");
        exit(0);
    }

    WINDOW* window = initscr();

    if(window == NULL) {
        mx_printerror("ERROR\n");
        exit(0);
    }

    start_color();
    curs_set(false);

    return window;
}



