# ----- Variables ----- #

# Compiler arguments.
CFLAGS = -Wall -O3 -g -pedantic -std=c99

# Headers.
HEADERS = sorting.h

# Sources.
SOURCES = main.c sorting.c

# Target executable.
NAME = sort

# Compiler
CC = gcc

# ----- Make Code ----- #

all: $(NAME)

$(NAME): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

clean:
	rm -f $(NAME)
	rm -r $(NAME).dSYM

rmbuild:
	rm -r $(NAME).dSYM
