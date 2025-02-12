#include <stdio.h>
#include "safeint.h"

void handle_error(SafeResult result) {
    if (result.errorflag) {
        printf("Error: Operation resulted in overflow, underflow, or invalid input.\n");
    }
}