#include <string.h>

void parse(char *input, char **args) {

    int i = 0;

    args[i] = strtok(input, " ");

    while (args[i] != NULL) {
        i++;
        args[i] = strtok(NULL, " ");
    }
}