#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do {                 \
        TYPE temp = A;   \
        A = B;           \
        B = temp;        \
    } while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE)             \
    do {                                             \
        for (int i = 0; i < SIZE - 1; i++) {         \
            for (int j = i + 1; j < SIZE; j++) {     \
                if (ARRAY[i] COMPARE ARRAY[j]) {     \
                    SWAP(ARRAY[i], ARRAY[j], TYPE);  \
                }                                    \
            }                                        \
        }                                            \
    } while (0)

#define PRINT_ARRAY(array, size)               \
    do {                                       \
        for (int i = 0; i < size; i++) {       \
            printf("%d ", array[i]);           \
        }                                      \
        printf("\n");                          \
    } while (0)

int main() {
    int array[5] = {5, 3, 4, 1, 2};
    printf("Array before sorting: ");
    PRINT_ARRAY(array, 5);

    SORT(array, 5, int, >);
    printf("Array after sorting (ascending): ");
    PRINT_ARRAY(array, 5);

    return 0;
}