#compiler and tools
CC       = arm-linux-gnueabihf-gcc

# Compiler flags
#CFLAGS   = -Wall -O2 -g
CFLAGS   = -O2 -g

# Directories
SRC_DIR   = src
INCLUDE_DIR = include

# Target binary
TARGET = test

# Source files
SOURCES = $(wildcard $(SRC_DIR)/*.c)

#include files
INCLUDES = -I ./$(INCLUDE_DIR)

# rules to build target
all: $(TARGET)

# rules to compile
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(SOURCES) 

.PHONY: clean

# clean 
clean:
	rm -f $(TARGET)

buildall: clean $(TARGET)

