/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:38:31 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/24 18:48:32 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char				*d;
	const char			*s;
	size_t				i;
	unsigned char		uc;

	uc = (unsigned char) c;
	d = (char *) dest;
	s = (const char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == uc)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char src[30]="Hi Aticleworld.com";
	char dest[31];
    const char src1[30]="Hi Aticleworld.com";
    char dest1[31];
	ft_memccpy(dest,src,'-',30);
    memccpy(dest1,src1,'-',30);

	printf("%s\n",dest);
    printf("%s\n",dest1);
	return(0);
}*/
