#include <stdio.h>
#include <math.h>

void raise_to_fourth(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}

int main() {
    long arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    raise_to_fourth(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }
    return 0;
}