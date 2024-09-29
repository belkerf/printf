NAME = libftprintf.a
CC = cc
FLAGS= -Werror -Wextra -Wall

all: libftprintf.a

libftprintf.a:
	$(CC) $(FLAGS) -c *.c *.h
	ar -rc  $(NAME) *.o
fclean:
	rm *.o *.a *.gch
	clear
