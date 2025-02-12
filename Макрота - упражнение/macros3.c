#include <stdio.h>

#define DEBUG_VAR(var) \
    printf("DEBUG: %s = %d, FILE: %s, LINE: %d\n", #var, var, __FILE__, __LINE__)

int main() {
    int value = 42;
    DEBUG_VAR(value);
    return 0;
}