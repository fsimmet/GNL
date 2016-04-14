# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/14 11:19:56 by fsimmet           #+#    #+#              #
#    Updated: 2016/04/14 11:24:25 by fsimmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRC =
SRCO = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = includes

all : $(NAME)

re : fclean all

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER)

$(NAME): $(SRCO)
	ar rc $@ $^
	ranlib $@

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
