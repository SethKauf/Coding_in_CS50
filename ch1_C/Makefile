# Makefile for compiling C files with the CS50 library

CC = gcc

# Compiler
CFLAGS = -Wall -Werror -std=c

# Define the target executable name
# Use pattern substitution to replace .c with nothing

TARGET = $(basename $(notdir $(wildcard *.c)))

# The default target
all: $(TARGET)

# Pattern rule to build the target from .c files
$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $^

# Rule to clean up generated files
clean:
	rm -f $(TARGET)

# Rule to remove all generated files and binaries
.PHONY: clean
