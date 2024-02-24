#include "../inc/matrix_rain.h"

void screensaver_play(WINDOW *window, int argc, char *flag, int speed) {
    t_screen screen;
    getmaxyx(window, screen.hight, screen.wight);
    start_color();

    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);

    noecho();

    t_line *line = malloc(sizeof(t_line) * screen.wight);

    for (int i = 0; i < screen.wight; i++) {
        line[i].str = malloc(sizeof(wchar_t) * screen.hight);

        for(int j = 0; j < screen.hight; j++) {
            line[i].str[j] = get_wchar();
        }

        line[i].length = rand() % screen.hight;
        line[i].first = 0 - line[i].length - line[i].length;
        line[i].last = 0 - line[i].length;
    }

    wbkgd(window, COLOR_PAIR(2));
    int color = 2;
    
    wclear(window);

    if((argc == 2 && mx_strcmp(flag, "-s") == 0)) {
        print_intro(window);
    }

    while(true) {
        wtimeout(window, speed);

        if(getch() == 'q') {
            break;
        }

        wclear(window);

        for (int i = 0; i < screen.wight; i++) {
            for (int j = 0; j < screen.hight; j++) {
                if(j >= line[i].first && j <= line[i].last) {
                    if(j == line[i].last) {
                        attroff(COLOR_PAIR(color));
                        attron(COLOR_PAIR(1));
                    }

                    mvprintw(j, i + i, "%lc", line[i].str[j]);

                    if(j == line[i].last) {
                        attroff(COLOR_PAIR(1));
                        attron(COLOR_PAIR(color));
                    }

                    if(j == line[i].first) {
                        line[i].str[j] = get_wchar();
                    }

                    if(j == line[i].last) {
                        line[i].str[j] = get_wchar();
                    }
                }
            }
            line[i].first++;
            line[i].last++;

            if(line[i].first > screen.hight) {
                line[i].length = rand() % screen.hight;
                line[i].first = 0 - line[i].length - line[i].length;
                line[i].last = 0 - line[i].length;
            }  
        }

        refresh();
    }

    for(int i = 0; i < screen.hight; i++) {
        free(line[i].str);
    }

    free(line);
}




