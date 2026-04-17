#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *b, size_t n);
void	ft_memcpy(void *dest, const *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size-t n);
void	*ft_memmove(oid *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);




#endif
