# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amichak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 20:12:36 by amichak           #+#    #+#              #
#    Updated: 2017/10/24 21:48:49 by amichak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c
HEADERS = includes/*
OBJ= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(LIB)

$(LIB):
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS)
	@ar rc $(LIB) $(OBJ) 
clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(LIB)

re: fclean all
