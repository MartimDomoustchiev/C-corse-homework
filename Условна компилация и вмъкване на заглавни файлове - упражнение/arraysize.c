#include <stdio.h>

#define ARRAY_SIZE 8

int main() {
#if defined(ARRAY_SIZE) && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = 1 << i;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", arr[i]);
    }
#else
    printf("Не е въведен размер на масива, който се поддържа от приложението.\n");
#endif

    return 0;
}