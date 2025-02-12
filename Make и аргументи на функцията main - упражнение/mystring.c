#include "mystrings.h"
#include <string.h>

size_t strlength(const char *str) {
    return strlen(str);
}

void strconcat(char *dest, const char *src) {
    strcat(dest, src);
}

int strcompare(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}