/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:32:07 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 18:00:56 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rstr;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	rstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (rstr == NULL)
		return (NULL);
	while (s[i])
	{
		rstr[i] = f(i, s[i]);
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}

/*#include <stdio.h>

char change_to_alpha(unsigned int i, char c)
{
	if(c == 0)
		return(c);
	if(i < 26)
		return('a' + i);
	return('a' + (i / 26));
}

int main(void)
{
	char str[12] = "hello world\0";
	printf("%s", ft_strmapi(str, change_to_alpha));
	return(0);
}*/
