#include "transformation.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

transformation str_to_int(const char *str) {
    transformation t = {0, "\0"};
    char *endptr;
    t.result = strtol(str, &endptr, 10);
    if (*endptr != '\0') {
        t.result = 0;
        strcpy(t.error, "Invalid input string");
    }
    return t;
}