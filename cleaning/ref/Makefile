# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 16:22:47 by gmalpart          #+#    #+#              #
#    Updated: 2017/09/25 16:39:45 by gmalpart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c ft_putnbr.c

OBJECTS = $(wildcard *.o)

$(NAME):	
	gcc -Wall -Wextra -Werror -c $(FILES)
	ar rc $(NAME)

all: $(NAME)
	
clean:
	/bin/rm -f 

fclean: clean
	/bin/rm -f $(NAME)

re:
