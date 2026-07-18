NAME = libft.a
 
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
 
FILES = ft_memset \
		ft_bzero \
		ft_memmove \
		ft_striteri \
		ft_memcpy \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \
		ft_lstmap
 
SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))
 
all: $(NAME)
 
$(NAME): $(OBJS)
	$(AR) $@ $^
 
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<
 
bonus: $(NAME)
 
clean:
	$(RM) $(OBJS)
 
fclean: clean
	$(RM) $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re bonus
