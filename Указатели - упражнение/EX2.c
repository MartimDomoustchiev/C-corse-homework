#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Въведете низ: ");
    if (fgets(str, sizeof(str), stdin)) {
        char *newline = strchr(str, '\n');
        if (newline) {
            *newline = '\0';
        }
    }

    printf("Въведеният низ без нов ред: %s\n", str);

    return 0;
}