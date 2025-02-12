#include "quadraticroots.h"
#include <math.h>

QuadraticRootsResult findroots(long double a, long double b, long double c) {
    QuadraticRootsResult result = {0.0L, 0.0L, 0};
    long double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        result.norealroots = 1;
    } else {
        long double sqrt_discriminant = sqrtl(discriminant);
        result.x1 = (-b + sqrt_discriminant) / (2 * a);
        result.x2 = (-b - sqrt_discriminant) / (2 * a);
    }

    return result;
}