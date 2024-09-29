NAME=libftprintf.a
CC=gcc
FLAGS= -Werror -Wextra -Wall

all: libftprintf.a

libftprintf.a:
	$(CC) $(FLAGS) *.c *.h -o output
