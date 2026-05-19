/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:56:33 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 19:07:27 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	if (!s || !f)
		return (NULL);
	s1 = malloc(sizeof(char ) * (ft_strlen(s) + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
char capitalize_even(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    return (c);
}

#include <stdio.h>

int main()
{
	printf("%s\n",ft_strmapi("hello", capitalize_even));
	return (0);
}*/
