# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 10:40:47 by almarcos          #+#    #+#              #
#    Updated: 2023/07/12 13:33:00 by almarcos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
	./srcs/ft_putchar.c ./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJECTS = \
	./ft_putchar.o ./ft_putstr.o \
	./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

INCLUDES = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
