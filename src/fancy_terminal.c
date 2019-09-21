#include <stdio.h>

#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"
#define KNRM "\x1B[0m"

void set_cursor_red() { printf("%s", KRED); }
void set_cursor_green() { printf("%s", KGRN); }
void set_cursor_yellow() { printf("%s", KYEL); }
void set_cursor_blue() { printf("%s", KBLU); }
void set_cursor_magenta() { printf("%s", KMAG); }
void set_cursor_cyan() { printf("%s", KCYN); }
void set_cursor_white() { printf("%s", KWHT); }
void set_cursor_default() { printf("%s", KNRM); }

void print_welcome_message() {
    set_cursor_magenta();
    printf(
        " __  __                        ____                          _        "
        "    \n|  \\/  | ___  _ __ ___  ___   / ___|___  _ ____   _____ _ __| "
        "|_ ___ _ __ \n| |\\/| |/ _ \\| '__/ __|/ _ \\ | |   / _ \\| '_ \\ \\ "
        "/ / _ \\ '__| __/ _ \\ '__|\n| |  | | (_) | |  \\__ \\  __/ | |__| "
        "(_) | | | \\ V /  __/ |  | ||  __/ |   \n|_|  |_|\\___/|_|  "
        "|___/\\___|  \\____\\___/|_| |_|\\_/ \\___|_|   \\__\\___|_|   \n\n");
    set_cursor_default();
}

void print_error_message() {
    set_cursor_red();
    printf("Error: wrong number of input elements provided\n");
    set_cursor_default();
    printf("HINT: run 'converter -h' to see the full sintax\n");
}

void print_help_message() {
    printf(
        "This is a simple tool that convers morse to ascii and "
        "vice-versa.\nThe program accepts only one input argument. The input "
        "argument is automaticcally parsed and then the program decides which "
        "conversion to use.\nExamples of use:\n\t./bin/converter \"--. --- --- "
        "-.. ---- .--- --- -... ---- --. ..- -.-- ...\"\n\t./bin/converter "
        "\"GOOD job GuYs\"\n");
}