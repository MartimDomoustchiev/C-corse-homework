#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: safemultiply <num1> <num2>\n");
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    SafeResult result = safemultiply(a.value, b.value);
    if (result.errorflag) {
        printf("Error: Multiplication caused overflow/underflow.\n");
    } else {
        printf("Result: %d\n", result.value);
    }

    return 0;
}