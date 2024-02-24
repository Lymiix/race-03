#include "../inc/matrix_rain.h"

void print_intro(WINDOW *window) {
	char *intro[] = {
		"Wake up , Neo..",
		"The Matrix has you..",
		"Follow the white rabbit",
		"Knock, knock, Neo"
	};
 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < mx_strlen(intro[i]); j++) {
            mvwaddch(window, 2, 2 + j, intro[i][j]);
            refresh();
            usleep(200000);
        }

        wclear(window);
    }

}
