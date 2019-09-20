#include <stdio.h>
#include "fancy_terminal.h"

void convert_ascii_to_morse(const char snectence[]) {
    printf("Assuming ASCII => Morse conversion\n");
    printf("[Original (ASCII)]: %s\n", snectence);
    set_cursor_cyan();
    printf("[Morse]: %s\n", snectence);
}