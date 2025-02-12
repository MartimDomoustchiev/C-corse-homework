#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }
    int cmp = strcompare(argv[1], argv[2]);
    printf("%d\n", cmp);
    return 0;
}