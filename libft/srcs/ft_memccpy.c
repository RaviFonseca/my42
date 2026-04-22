/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:38:31 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/22 19:00:12 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *) dest;
	s = (const char *) src;
	i = 0;
	while ((i < n) && (i != c))
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char src[20]="Hi Aticleworld.com";
	char dest[20];
	ft_memccpy(dest,src,".",strlen(src));
	printf("%s\n",dest);
	return(0);
}
