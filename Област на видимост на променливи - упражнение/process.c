#include <stdio.h>
#include <string.h>
#include "process.h"

Process processes[MAX_PROCESSES];
int processescount = 0;
static int nextid = 1; 

static int nextprocessid() {
    if (nextid > 0) {
        return nextid++;
    }
    return 0;
}

int createnewprocess(const char* name) {
    if (processescount >= MAX_PROCESSES) {
        return 0; 
    }

    int id = nextprocessid();
    if (id == 0) {
        return 0; 
    }

    Process new_process;
    new_process.id = id;
    strncpy(new_process.name, name, MAX_NAME_LENGTH);
    new_process.name[MAX_NAME_LENGTH] = '\0';

    processes[processescount++] = new_process;
    return id;
}
void stopprocess(int id) {
    int index = -1;


    for (int i = 0; i < processescount; i++) {
        if (processes[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        return; 
    }

    for (int i = index; i < processescount - 1; i++) {
        processes[i] = processes[i + 1];
    }

    processescount--;
}


void listprocesses() {
    if (processescount == 0) {
        printf("Няма активни процеси.\n");
        return;
    }

    printf("Активни процеси:\n");
    for (int i = 0; i < processescount; i++) {
        printf("ID: %d, Име: %s\n", processes[i].id, processes[i].name);
    }
}