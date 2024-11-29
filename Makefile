# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:53:37 by jbelkerf          #+#    #+#              #
#    Updated: 2024/11/27 18:18:54 by jbelkerf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = printf.c print_str.c print_lhexa.c print_uhexa.c print_char.c print_dec.c print_pointer.c \
check_flag.c print_unsigned.c

OBJ = $(SRC:.c=.o)
CC = cc
FLAGS= -Werror -Wextra -Wall

all: $(NAME)

bonus: $(NAME)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
$(NAME): $(OBJ) 
	ar -rc  $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)