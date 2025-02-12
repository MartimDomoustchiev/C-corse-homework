#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a = 10, b = 20;
    printf("The maximum of %d and %d is %d\n", a, b, MAX(a, b));
    return 0;
}