/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:20:10 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 16:49:36 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sr;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = sr[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>

int main(void)
{
	char dest[11] = "hello world";
	char src[5] = "bye  ";
	void *test = ft_memcpy((void *)dest, (void *)src, 5);
	printf("%s", (char *)test);
	return(0);
}*/
