# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/14 11:19:56 by fsimmet           #+#    #+#              #
#    Updated: 2016/04/20 16:18:58 by fsimmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRC = test.c
SRC += fdf.c
SRCO = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = header

all : $(NAME)

re : fclean all

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER)

$(NAME): $(SRCO)
	make -C libft
	$(CC) $(CFLAGS) -o $@ libft/libft.a $^ -lmlx -framework Appkit -framework OpenGL

clean:
	make clean -C libft
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
