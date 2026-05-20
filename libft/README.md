# Libft

#This project has been created as part of the 42 curriculum by rfonseca

## Description

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum at Campus 19 / 42 Belgium.

The goal of this project was to recreate several standard libc functions from scratch while gaining a deeper understanding of low-level programming concepts in C such as:

- Memory manipulation
- String handling
- Dynamic memory allocation
- File descriptors
- Data conversion
- Linked lists
- Pointers and pointer arithmetic
- Manual memory management
- Defensive programming and edge-case handling

Throughout the development process, particular attention was given to:
- Code readability
- Norminette compliance
- Memory leak prevention
- Function robustness
- Edge-case testing

---

## Learning Resources & Tools Used

During the development of this project, several external resources and tools were used for research, debugging, testing, and conceptual understanding, including:

- MAN pages (`man`)
- GeeksForGeeks
- TutorialsPoint
- Stack Overflow
- AI Tools
- Medium articles


These resources were particularly useful for:
- Verifying edge cases
- Debugging memory issues
- Comparing expected outputs
- Learning linked list manipulation
- Understanding overflow protection and undefined behavior

---

## Compilation

Compile the library:

make

Clean object files:

make clean

Remove object files and library:

make fclean

Recompile everything:

make re

Mandatory Functions
-------------------

Character Checks
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint

String Functions
ft_strlen
ft_strchr
ft_strrchr
ft_strncmp
ft_strnstr
ft_strdup
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_strmapi
ft_striteri
ft_itoa

Memory Functions
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_memchr
ft_memcmp
ft_calloc

Conversion Functions
ft_atoi
ft_toupper
ft_tolower

File Descriptor Functions
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

