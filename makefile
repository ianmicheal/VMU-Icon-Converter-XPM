# Makefile for VMU Icon Converter

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -O2

# Source file
SRC = vmuxpm.c

# Output executable
TARGET = vmuxpm

# Header files
HEADERS = stb_image.h

# Default target
all: $(TARGET)

# Compile the program
$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) -lm

# Clean up
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean
