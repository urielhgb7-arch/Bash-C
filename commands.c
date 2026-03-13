#include <stdio.h>
#include <stdlib.h>

void execute_command(char *input) {

    if (strcmp(input, "exit") == 0) {
        exit(0);
    }

    system(input);
}