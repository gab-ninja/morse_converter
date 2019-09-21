#include <stdio.h>
#include "fancy_terminal.h"

void convert_morse_to_ascii(const char *sentence) {
    const char tree[] = "ETIANMSURWDKGOHVF-L-PJBXCYZQ- ";
    int i = 0;

    printf("Assuming Morse => ASCII conversion\n");
    printf("[Original (Morse)]: %s\n", sentence);
    set_cursor_cyan();
    printf("[ASCII]: ");

    for (; *sentence; ++sentence) {
        if ((*sentence) == ' ') {
            printf("%c", tree[--i]);
            i = 0;
            continue;
        }
        if ((*sentence) == '.') {
            i = 2 * i + 1;
        } else {
            i = 2 * i + 2;
        }
    }
    printf("%c\n", tree[--i]);
}