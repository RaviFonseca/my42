*This project has been created as part of the 42 curriculum by rfonseca*

# ft_printf

## Description

The objective of this project is to recreate a simplified version of the standard C `printf()` function.

The implementation supports the mandatory conversion specifiers:

* `%c` : character
* `%s` : string
* `%p` : pointer address
* `%d` : signed decimal integer
* `%i` : signed integer
* `%u` : unsigned decimal integer
* `%x` : hexadecimal (lowercase)
* `%X` : hexadecimal (uppercase)
* `%%` : percent sign

The purpose of the project is to introduce variadic functions, recursive number printing, format parsing, and low-level output management using only the allowed system calls and standard library functions.

---

## Instructions

### Compilation

Compile the project using:

```bash
make
```

This will generate:

```bash
libftprintf.a
```

### Cleaning object files

```bash
make clean
```

### Removing object files and library

```bash
make fclean
```

### Recompiling the project

```bash
make re
```

### Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Name: %s\n", "Ravi");
    ft_printf("Age: %d\n", 25);
    ft_printf("Hexadecimal: %x\n", 42);
    return (0);
}
```

---

## Technical Design

### Overall Architecture

The implementation is divided into several specialized helper functions:

| Function         | Responsibility                                    |
| ---------------- | ------------------------------------------------- |
| `ft_printf`      | Parse format string and manage variadic arguments |
| `ft_format`      | Dispatch conversion specifiers                    |
| `ft_putchar`     | Print a single character                          |
| `ft_putstr`      | Print a string                                    |
| `ft_putnbr`      | Print signed integers                             |
| `ft_putunsigned` | Print unsigned integers                           |
| `ft_puthex`      | Print hexadecimal values                          |

The project follows a dispatcher-based architecture.

When a `%` character is found, the next character is analysed and redirected to the corresponding helper function.

Example:

```c
ft_printf("Value: %d", 42);
```

The `%d` specifier is detected and delegated to `ft_putnbr()`.

---

## Algorithm Explanation

### Variadic Arguments

The project uses the standard variadic macros:

```c
va_start()
va_arg()
va_end()
```

These macros allow the function to process an unknown number of arguments.

For example:

```c
ft_printf("Name: %s Age: %d", "Ravi", 25);
```

The first call to `va_arg()` retrieves `"Ravi"` and the second retrieves `25`.

---

### Integer Printing

Signed integers are printed recursively.

Example:

```txt
1234
```

The recursion decomposes the number as:

```txt
1234
 └── 123
      └── 12
           └── 1
```

Digits are printed during the recursion unwind:

```txt
1 2 3 4
```

This approach avoids temporary buffers and dynamic allocations.

Special attention was required for:

```c
INT_MIN
```

To avoid integer overflow, the recursive implementation uses the `long` type internally.

---

### Unsigned Integer Printing

Unsigned values use the same recursive approach as signed integers, without negative number handling.

---

### Hexadecimal Conversion

Hexadecimal conversion is implemented recursively using a base string:

```c
"0123456789abcdef"
```

Each digit is obtained through:

```c
n % 16
```

and recursion continues with:

```c
n / 16
```

Example:

```txt
42
```

becomes:

```txt
2a
```

For uppercase hexadecimal:

```c
"0123456789ABCDEF"
```

is used instead.

---

### Pointer Printing

Pointers are retrieved as:

```c
void *
```

and converted to:

```c
unsigned long
```

before hexadecimal conversion.

Special handling is implemented for:

```c
NULL
```

which prints:

```txt
(nil)
```

to match the behaviour of the system `printf()` implementation used by the project testers.

---

## Challenges and Debugging Process

During development several issues were encountered:

### NULL String Handling

Initial versions crashed when executing:

```c
ft_printf("%s", NULL);
```

The issue was solved by explicitly printing:

```txt
(null)
```

when a NULL string is received.

### Pointer Truncation

An early version stored pointers as:

```c
unsigned int
```

which truncated memory addresses on 64-bit systems.

The solution was to convert pointers to:

```c
unsigned long
```

before hexadecimal conversion.

### INT_MIN Overflow

A recursive implementation using `int` caused infinite recursion for:

```c
INT_MIN
```

This was fixed by promoting values to `long` during processing.

---

## Resources

### Documentation

* The Linux `printf(3)` manual page
* The Linux `stdarg(3)` manual page
* 42 School subject documentation

### External References

* GeeksForGeeks – Number base conversion algorithms
* TutorialsPoint – Variadic functions

---

## AI Usage

Artificial Intelligence was used as a learning and debugging assistant during development.

AI assistance included:

* Explanation of variadic functions
* Further explanatory examples of Recursive algorithm
* Identification of edge cases

