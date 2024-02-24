#include "../inc/matrix_rain.h"

int main(int argc, char **argv) {
    WINDOW *window = screensaver_new(argc);

    int default_speed = 30;
    screensaver_play(window, argc, argv[1], default_speed);

    screensaver_destroy(window);

    exit(0);
}




