#include <stdio.h>
#include <string.h>
#include "parser.h"
#include "commands.h"

#define MAX_INPUT 1024

void start_shell() {

    char input[MAX_INPUT];

    while (1) {

        printf("myterminal> ");

        fgets(input, MAX_INPUT, stdin);

        input[strcspn(input, "\n")] = 0;

        execute_command(input);
    }
}