# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/14 11:19:56 by fsimmet           #+#    #+#              #
#    Updated: 2016/04/20 16:04:38 by fsimmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRC = test.c
SRCO = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = header

all : $(NAME)

re : fclean all

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER)

$(NAME): $(SRCO)
	$(CC) $(CFLAGS) -o $@ $^ -lmlx -framework Appkit -framework OpenGL

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
