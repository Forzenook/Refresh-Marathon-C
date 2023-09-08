#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (char c  = 65; c <= 90; c++) {
        if (c % 2 == 0) {
            mx_printchar(c + 32);
        } else {
            mx_printchar(c);
    }
}
    mx_printchar('\n');
}
