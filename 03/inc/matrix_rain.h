#ifndef MATRIX_RAIN_H
#define MATRIX_RAIN_H

#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

typedef struct s_line {
    wchar_t *str;
    int length;
    int first;
    int last;
}              t_line;
typedef struct s_screen
{
    int hight;
    int wight;
}      t_screen;

typedef struct s_settings 
{
    int color;
    int speed;
}       t_settings;

WINDOW *screensaver_new(int argc);
void screensaver_destroy(WINDOW *window);

void screensaver_play(WINDOW *window, int argc, char *flag, int speed);

void print_intro(WINDOW *window);
wchar_t get_wchar(void);


void mx_printerror(char *str);
int mx_strlen(char *s);
int mx_strcmp(const char *s1, const char *s2);

#endif
