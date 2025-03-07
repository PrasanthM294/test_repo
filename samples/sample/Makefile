CC = gcc
FLAGS = -o
SRC_FILE = test.c
OUTPUT_FILE = test

build: $(SRC_FILE)
	$(CC) $(SRC_FILE) $(FLAGS) $(OUTPUT_FILE)

clean: 
	rm -f $(OUTPUT_FILE)

run: test
	./$(OUTPUT_FILE)

