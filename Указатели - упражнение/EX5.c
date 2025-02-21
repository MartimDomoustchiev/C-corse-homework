#include <stdio.h>

void bubblesort(void *array, int n, int (*compare)(const void *, const void *), void (*swapelements)(void *, void *)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            void *a = (char *)array + j * sizeof(void *);
            void *b = (char *)array + (j + 1) * sizeof(void *);
            if (compare(a, b) > 0) {
                swapelements(a, b);
            }
        }
    }
}

int compare_ints(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void swap_ints(void *a, void *b) {
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int compareasc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int comparedesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);

    bubblesort(array, n, compareasc, swap_ints);
    printf("Sorted in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    bubblesort(array, n, comparedesc, swap_ints);
    printf("Sorted in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}