/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:33:46 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 18:39:44 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				i;
	unsigned char		cc;
	const unsigned char	*str;

	cc = (unsigned char)c;
	str = (const unsigned char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == cc)
			return ((char *) &str[i]);
		i--;
	}
	if (str[0] == cc)
		return ((char *) &str[0]);
	return (NULL);
}

/*#include <stdio.h>

int main(void)
{
	char str[12] = "hello world\0";
	printf("%s", ft_strrchr(str, 'l'));
	return(0);
}*/
