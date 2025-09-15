# Variables
CC = gcc
CFLAGS = -Wall -g

# Default target (executed if no target is specified)
TARGET = myprogram

# source and onject file
SRCS = main.c readwrite.c maths.c
OBJS = $(SRCS:.c = .o)

# Rule for creating the executable 'myprogram'
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Rule for creating .o files from .c files
%.o : %.c readwrite.h maths.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f *.o $(TARGET)