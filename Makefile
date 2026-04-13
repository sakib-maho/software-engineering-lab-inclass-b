CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

SRC = src/main.c src/gradebook.c
TEST_SRC = tests/test_gradebook.c src/gradebook.c

.PHONY: build test clean

build:
	$(CC) $(CFLAGS) $(SRC) -o gradebook

test:
	$(CC) $(CFLAGS) $(TEST_SRC) -o gradebook_test
	./gradebook_test

clean:
	rm -f gradebook gradebook_test
