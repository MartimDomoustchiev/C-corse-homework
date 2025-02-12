#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

void menu() {
    printf("\nМеню:\n");
    printf("1. Създаване на процес\n");
    printf("2. Извеждане на списък с всички процеси\n");
    printf("3. Спиране на процес\n");
    printf("4. Изход\n");
    printf("Изберете опция: ");
}

int main() {
    int choice;

    while (1) {
        menu();
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: {
                if (processescount >= MAX_PROCESSES) {
                    printf("Грешка: Достигнат е максималният брой активни процеси.\n");
                    break;
                }

                char name[MAX_NAME_LENGTH + 1];
                printf("Въведете име на процес: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';

                int id = createnewprocess(name);
                if (id == 0) {
                    printf("Грешка: Не може да се създаде нов процес.\n");
                } else {
                    printf("Процесът е създаден успешно с ID: %d\n", id);
                }
                break;
            }

            case 2:
                listprocesses();
                break;

            case 3: {
                int id;
                printf("Въведете ID на процеса за спиране: ");
                scanf("%d", &id);

                stopprocess(id);
                printf("Процесът с ID %d е спрян (ако е съществувал).\n", id);
                break;
            }

            case 4:
                printf("Изход...\n");
                exit(0);

            default:
                printf("Невалидна опция. Опитайте отново.\n");
        }
    }

    return 0;
}
