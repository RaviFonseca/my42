_This project has been created as part of the 42 curriculum by edelbrou._
 
# Description:
The libft project intends on recreating a personal function library, mainly based on the recreations of Libc functions. Close to a lot of exercises included in the piscine, it goes deeper into memory and type casting.
 
# Instructions:
- `make / make all`: compile all the files into the libft.a.
- `make clean`: removes every compiled file except libft.a.
- `make fclean`: same as clean although it removes the libft.a too.
- `make re`: removes every file already compiled and then recompiles everything.

# Complete function list:
 
## Libc functions:
- `ft_isalpha / ft_isdigit / ft_isalnum / ft_isascii / ft_isprint`: check respectively if the character introduced as an int is alphabetical / numerical / alphabetical or numerical / on the ASCII table / printable, returning 1 if yes and 0 if not.
- `ft_toupper / ft_tolower`: take a character introduced as an int and change it to uppercase / lowercase only if it’s lowercase / uppercase.
- `ft_strlen`: returns a size_t equivalent to the size of the string of characters passed as a parameter.
- `ft_strchr / ft_strrchr / ft_memchr`: search for the first occurrence (or last, for ft_strrchr) of a character in a given string. For ft_memchr it does the same thing but takes a void pointer that it casts as an unsigned char *.
- `ft_memset / ft_bzero`: take a void pointer to a memory space and fill it with a given int for ft_memset and 0 for ft_bzero.
- `ft_strlcpy / ft_strlcat`: copy / concatenate a source string into a dest string.
- `ft_strnstr`: searches for the first occurrence of a string needle in a string haystack.
- `ft_memcpy / ft_memmove`: copy a given number of bytes in memory; if there is an overlap, the behavior of ft_memcpy is undefined while ft_memmove handles it in a non-destructive way.
- `ft_strncmp / ft_memcmp`: compare the difference in ASCII from two different strings / memory areas.
- `ft_atoi`: converts a string into an int while being protected from overflows and underflows.
- `ft_strdup`: duplicates a given string, allocating enough memory space for it.
- `ft_calloc`: allocates memory space that it will fill with zeros, compared to the classic version of malloc that will fill it with undefined values.

## Additional functions:
- `ft_substr`: duplicates len characters of a string starting at the start index.
- `ft_strjoin`: returns a new string created by joining two strings given in parameters.
- `ft_strtrim`: returns a new string created by removing given characters from a given string.
- `ft_split`: returns an array of strings based on splitting a given string each time it encounters a given character.
- `ft_itoa`: converts an int into a string.
- `ft_strmapi / ft_striteri`: apply a function passed as a parameter to each character of a string, modifying it in ft_striteri and returning a new string in ft_strmapi.
- `ft_putchar_fd / ft_putstr_fd / ft_putendl_fd / ft_putnbr_fd`: do the same thing as the classic ft_putchar, ft_putnbr, etc., however this time they take as a parameter the fd in which to display the input with write.

## Linked list functions:
- `ft_lstnew`: creates a new node, setting its next pointer to NULL.
- `ft_lstadd_front / ft_lstadd_back`: add a given node at the front / back of an already existing linked list.
- `ft_lstsize`: returns the number of nodes in a linked list.
- `ft_lstlast`: returns the last node of a linked list.
- `ft_lstdelone / ft_lstclear`: free a given node / the whole linked list passed as a parameter, with a del function also passed as a parameter.
- `ft_lstiter / ft_lstmap`: apply a function passed as a parameter to a linked list, modifying it in ft_lstiter or returning a new linked list with ft_lstmap.

# Resources:
 
## Experience in the piscine:
As a lot of the functions included in the libft project closely resemble the ones we had to code during the piscine, a big part of the resources comes from my experience there, the peer-to-peer learning, etc.
 
## Forums:
Forums like Stack Overflow also helped me a lot, as most questions one could have while coding have already been answered there with concrete examples of code and how to apply functions, concepts, etc.
 
## Leetcode:
Especially for linked lists, the solutions provided by Leetcode users to each problem usually display pretty clearly how to understand and apply those new concepts, and the website itself gives good exercises to go deeper into data structures like this.
 
## YouTube:
Especially the CS50 Harvard course available there and the YouTube channels of Portfolio Courses, Bro Code and Low Level helped me a lot.
 
## AI:
While I’m strongly against using AI to simply write code for me, I think it’s an incredibly powerful tool to understand new concepts, debug the code by trying tests I wouldn’t have thought about and to use as a teacher, asking it specific questions or telling it to test my knowledge about a given function / concept.