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


