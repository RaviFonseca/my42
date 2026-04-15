# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 18:04:23 by rfonseca          #+#    #+#              #
#    Updated: 2026/04/15 18:04:26 by rfonseca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = $(wildcard srcs/*.c)

INCLUDES = -I includes

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS) $(INCLUDES)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all


