# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/18 19:50:44 by rfonseca          #+#    #+#              #
#    Updated: 2026/04/18 20:16:15 by rfonseca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard srcs/*.c)

OBJS = $(SRCS: *.c = %.o)

NAME = libft.a

INCLUDES = -I includes

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS) $(INCLUDES)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
