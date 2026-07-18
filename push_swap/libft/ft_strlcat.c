/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:30:52 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 16:45:58 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	size = ft_strlen(dst) + ft_strlen(src);
	while (dst[i])
		i++;
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	while (i < dstsize - 1 && j < ft_strlen(src))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size);
}

/*#include <stdio.h>

int main(void)
{
	char s1[20] = "hello world\0";
	char s2[10] = "bye world\0";
	printf("%d\n", (int)ft_strlcat(s1, s2, 15));
	printf("%s", s1);
	return(0);
}*/
