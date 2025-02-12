#include <stdio.h>
#define SQUARE_SUM(A, B) ((A) + (B)) * ((A) + (B))

int main() {
    int a = 3, b = 4;
    printf("Result: %d\n", SQUARE_SUM(a, b));
    return 0;
}