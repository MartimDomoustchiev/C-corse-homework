#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("Internal quit command executed.\n");
}

DEFINE_COMMAND(start, external) {
    printf("External start command executed.\n");
}

int main() {
    COMMAND(quit, internal)();
    COMMAND(start, external)();
    return 0;
}