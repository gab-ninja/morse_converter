#include <ctype.h>
#include <stdio.h>
#include "fancy_terminal.h"

void convert_ascii_to_morse(char *sentence) {
    const char *morse_codes[27] = {
        ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
        ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--..", "----"};
    int invalid_characters = 0;

    printf("Assuming ASCII => Morse conversion\n");
    printf("[Original (ASCII)]: %s\n", sentence);
    set_cursor_cyan();
    printf("[Morse]: ", morse_codes[1]);

    while ((*sentence) != '\0') {
        if ((*sentence) == 32) {
            printf("%s ", morse_codes[26]);
        } else {
            (*sentence) = toupper((*sentence));
            if ((*sentence) >= 65 && (*sentence) <= 122) {
                printf("%s ", morse_codes[(*sentence) - 65]);
            } else {
                invalid_characters = 1;
            }
        }
        sentence++;
    }
    printf("\n");
    if (invalid_characters) {
        set_cursor_red();
        printf("[Warning]: some characters were ignored\n");
    }
}