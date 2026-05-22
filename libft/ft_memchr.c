/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:31:46 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/21 16:35:43 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	nc;
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *) str;
	nc = (unsigned char ) c;
	while (i < n)
	{
		if (s[i] == nc)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {
  char myStr[] = "Hello World!";
  char *myPtr = (char*)ft_memchr(myStr, 'W', 12);
  if (myPtr != NULL) {
    printf("%s", myPtr);
  }
  return 0;
}*/
