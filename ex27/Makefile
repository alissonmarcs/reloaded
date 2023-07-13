# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 13:47:31 by almarcos          #+#    #+#              #
#    Updated: 2023/07/13 19:20:06 by almarcos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = \
	./src/ft_display_file.c \
	./src/main.c \
	./src/puts.c

OBJECTS = \
	./ft_display_file.o \
	./main.o \
	./puts.o

INCLUDES = \
	./includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) -I $(INCLUDES) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -r $(NAME)

re: fclean all
