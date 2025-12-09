CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror -g

SRC=src/main.c src/util.c
OBJ=$(SRC:.c=.o)

TARGET=app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)
