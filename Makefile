CC = gcc

CFLAGS = -Wall -Wextra -g

SRC = main.c definitions.c

OBJ = $(SRC:.c=.o)

EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c definitions.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJ)