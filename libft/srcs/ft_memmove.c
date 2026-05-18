/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:07:24 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 17:44:20 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*mdest;
	const char	*msrc;
	size_t		i;

	mdest = (char *) dest;
	msrc = (const char *) src;
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			mdest[i] = msrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			mdest[i] = msrc[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[] = "oldstring";
	char src[] = "newstring";
	ft_memmove(dest, src, 9);
	printf("%s\n",dest);
	return (0);
}*/
