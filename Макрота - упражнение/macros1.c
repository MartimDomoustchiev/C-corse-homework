#include <stdio.h>

#define DEFINE_ARRAY(type, name) type name[5]
#define PRINT_ARRAY(array)                  \
    do {                                    \
        for (int i = 0; i < 5; i++) {       \
            printf("%d ", array[i]);        \
        }                                   \
        printf("\n");                       \
    } while (0)

int main() {
    DEFINE_ARRAY(int, arr) = {1, 2, 3, 4, 5};
    PRINT_ARRAY(arr);
    return 0;
}