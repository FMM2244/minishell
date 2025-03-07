
#include <stdio.h>
#include <curses.h>
#include <term.h>
#include <termcap.h>
#include "libft/libft.h"

// int tputs(const char *str, int affcnt, int (*putc)(int));

// used to handel terminal capabilities in Unix
// the first parameter const char *str: contains the termcap control sequence.
// second parameter int affcnt: number of lines.
// third parameter int (*putc)(int): pointer to function that prints a character.
// returns 0 in success, -1 on fail.
// this function will be used to execute terminal routines like "clear"

// char *tgetstr(const char *capname, char **area);

// used to retr


int my_putchar(int c) {
    return putchar(c);
}

int main() {
    char term_buffer[2048];  // Buffer for termcap entry
    char *clear;
    char *area = term_buffer;

    if (tgetent(term_buffer, getenv("TERM")) < 0) {
        printf("Could not access termcap database.\n");
        return 1;
    }

    clear = tgetstr("cl", &area);
    if (clear) {
        tputs(clear, 1, my_putchar);
    } else {
        printf("Clear screen not supported.\n");
    }

    return 0;
}
