#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }
    if (strlen(argv[1]) > MAX_LENGTH || strlen(argv[2]) > MAX_LENGTH) {
        fprintf(stderr, "Error: Each string must not exceed %d characters.\n", MAX_LENGTH);
        return 1;
    }
    char result[MAX_LENGTH * 2 + 1];
    strcpy(result, argv[1]);
    strconcat(result, argv[2]);
    printf("%s\n", result);
    return 0;
}