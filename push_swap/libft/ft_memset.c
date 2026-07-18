/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:22:32 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 18:40:01 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*chr;

	i = 0;
	chr = (unsigned char *)b;
	while (i < len)
	{
		chr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>

int main(void)
{
	void *test;
	char str[11] = "hello world";
	test = &str;
	ft_memset(test, 'z', 7);
	printf("%s\n", (char *)test);
	return(0);
}*/
