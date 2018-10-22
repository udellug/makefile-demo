CC = gcc
CFLAGS = -march=native -Wall -Wshadow -O2
SRC = $(wildcard func*.c)
OBJS = $(SRC:.c=.o)
all: test encrypt decrypt

encrypt: encrypt.o encode.o $(OBJS)
	$(CC) -o $@ $^

decrypt: decrypt.o decode.o $(OBJS)
	$(CC) -o $@ $^

test: $(OBJS) test.o
	$(CC) -o $@ $^
	./test
	echo "YOUR TESTS PASSED :)"

clean:
	rm encrypt decrypt *.o
