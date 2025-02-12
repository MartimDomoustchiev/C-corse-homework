#include <stdio.h>
#include "quadraticroots.h"

void printroots(long double a, long double b, long double c) {
    QuadraticRootsResult result = findroots(a, b, c);

    if (result.norealroots) {
        printf("The equation %.2Lf*x^2 + %.2Lf*x + %.2Lf = 0 has no real roots.\n", a, b, c);
    } else {
        printf("The roots of %.2Lf*x^2 + %.2Lf*x + %.2Lf = 0 are:\n", a, b, c);
        printf("x1 = %.5Lf\n", result.x1);
        printf("x2 = %.5Lf\n", result.x2);
    }
}

int main() {
    printroots(1, -3, 2);          
    printroots(1.0f, -5.0f, 6.0f);
    printroots(1.0, -6.0, 9.0);    

    return 0;
}