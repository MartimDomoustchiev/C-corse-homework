#include <stdio.h>
#define DEBUG

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sumElementsAtDivisibleByThreeIndices(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
#ifdef DEBUG
            printf("Element at index %d (value: %d) is added to the sum.\n", i, arr[i]);
#endif
        }
    }

    printf("Sum of elements at indices divisible by 3: %d\n", sum);

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
#endif
}

int main() {
    int arr[] = {5, 2, 8, 1, 7, 4, 3, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);
    sumElementsAtDivisibleByThreeIndices(arr, size);

    return 0;
}