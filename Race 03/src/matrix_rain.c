#include "../inc/matrix_rain.h"

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "ja_JP.UTF-8");
    WINDOW *window = screensaver_new(argc);

    screensaver_play(window, argc, argv[1], DEFAULT_SPEED);

    screensaver_destroy(window);

    exit(0);
}




