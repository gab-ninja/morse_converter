#include <stdio.h>
#include <string.h>
#include "ascii_to_morse.h"
#include "fancy_terminal.h"
#include "morse_to_ascii.h"

int detects_if_is_morse(char const *string);

int main(int argc, char const *argv[]) {
    print_welcome_message();
    if (argc != 2) {
        print_error_message();
        return 1;
    }
    if (!strcmp(argv[1], "-h")) {
        print_help_message();
        return 0;
    }

    // printf("%s\n", argv[1]);
    if (detects_if_is_morse(argv[1])) {
        printf("Assuming Morse => ASCII conversion\n");
        printf("[Original (Morse)]: %s\n", argv[1]);
        set_cursor_cyan();
        printf("[ASCII]: %s\n", argv[1]);
        return 0;
    }
    printf("Assuming ASCII => Morse conversion\n");
    printf("[Original (ASCII)]: %s\n", argv[1]);
    set_cursor_cyan();
    printf("[Morse]: %s\n", argv[1]);

    return 0;
}

int detects_if_is_morse(const char *string) {
    while ((*string) != '\0') {
        if ((*string) != '-' && (*string) != '.' && (*string) != ' ') {
            return 0;
        }
        string++;
    }
    return 1;
}
