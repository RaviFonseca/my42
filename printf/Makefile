# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 01:18:16 by rfonseca          #+#    #+#              #
#    Updated: 2026/05/31 02:15:10 by rfonseca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_puthex.c \
		ft_putnbr.c ft_putstr.c ft_putunsigned.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "libftprintf.a created"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "libftprintf.a  removed"

re: fclean all
	@echo "Recompiled successfully"

PHONY: all clean fclean re
