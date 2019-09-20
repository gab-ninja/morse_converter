#include <stdio.h>
#include "fancy_terminal.h"

void convert_morse_to_ascii(const char *sentence) {
    static const char tree[] = "ETIANMSURWDKGOHVF-L-PJBXCYZQ- ";
    int i;
    printf("Assuming Morse => ASCII conversion\n");
    printf("[Original (Morse)]: %s\n", sentence);
    set_cursor_cyan();
    printf("[ASCII]: ");
    while ((*sentence) != '\0') {
        i = 0;
        while ((*sentence) != ' ') {
            if ((*sentence) == '\0') {
                printf("%c\n", tree[--i]);
                return;
            }
            if ((*sentence) == '.') {
                i = 2 * i + 1;
            } else {
                i = 2 * i + 2;
            }
            sentence++;
        }
        printf("%c", tree[--i]);
        sentence++;
    }
}