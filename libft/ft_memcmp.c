/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:52:09 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/20 16:19:09 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ms1;
	unsigned char	*ms2;
	size_t			i;

	if (n == 0)
		return (0);
	ms1 = (unsigned char *)s1;
	ms2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ms1[i] != ms2[i])
			return (ms1[i] - ms2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[15];
   char str2[15];
   int ret;
   int ret2;
   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 0);
   ret2 = ft_memcmp(str1, str2, 0);
   printf("ret: %d\n",ret);
   printf("ft ret2: %d\n",ret2);

   return(0);
}*/
