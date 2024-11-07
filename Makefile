# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:53:37 by jbelkerf          #+#    #+#              #
#    Updated: 2024/11/07 17:10:18 by jbelkerf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putstr.c Hexa.c print_char.c print_dec.c print_pointer.c \
check_flag.c hexa1.c

OBJ = $(SRC:.c=.o)
CC = cc
FLAGS= -Werror -Wextra -Wall

all: $(NAME)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
$(NAME): $(OBJ) 
	ar -rc  $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)