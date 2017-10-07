# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 16:22:47 by gmalpart          #+#    #+#              #
#    Updated: 2017/10/07 02:43:02 by gmalpart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c ft_putnbr.c \
	ft_bzero.c ft_bzero.c ft_memalloc.c ft_memcpy.c ft_memdel.c \
	ft_memset.c ft_strcpy.c ft_strncpy.c ft_strnew.c ft_strdup.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c ft_putnbr_fd.c \
	ft_strequ.c ft_putendl_fd.c ft_strclr.c ft_strrevert.c ft_strtrim.c \
	ft_atoi.c ft_itoa.c ft_nbrlen.c ft_strnequ.c ft_strcat.c ft_tolower.c \
	ft_toupper.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c \
	ft_isalnum.c ft_strdel.c

OBJECTS = $(wildcard *.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -Iincludes $(FILES)
	ar rcs $(NAME) *.o
	ranlib libft.a

all: $(NAME)
	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
