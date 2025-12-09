CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g -Iinclude

SRC = src/main.c src/util.c
OBJ = $(SRC:.c=.o)

all: app

app: $(OBJ)
	$(CC) $(CFLAGS) -o app $(OBJ)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) app
