#include <stdio.h>
#include "ascii_to_morse.h"
#include "morse_to_ascii.h"

int main(int argc, char const *argv[])
{
    printf(" __  __                        ____                          _            \n");
    printf("|  \\/  | ___  _ __ ___  ___   / ___|___  _ ____   _____ _ __| |_ ___ _ __ \n");
    printf("| |\\/| |/ _ \\| '__/ __|/ _ \\ | |   / _ \\| '_ \\ \\ / / _ \\ '__| __/ _ \\ '__|\n");
    printf("| |  | | (_) | |  \\__ \\  __/ | |__| (_) | | | \\ V /  __/ |  | ||  __/ |   \n");
    printf("|_|  |_|\\___/|_|  |___/\\___|  \\____\\___/|_| |_|\\_/ \\___|_|   \\__\\___|_|   \n");
    printOne();
    printTwo();
    printf("%d\n", argc);
    return 0;
}
