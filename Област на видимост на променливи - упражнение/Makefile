CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = taskmanager
OBJS = processes.o taskmanager.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

processes.o: processes.c processes.h
	$(CC) $(CFLAGS) -c processes.c

taskmanager.o: taskmanager.c processes.h
	$(CC) $(CFLAGS) -c taskmanager.c

clean:
	rm -f $(OBJS) $(TARGET)