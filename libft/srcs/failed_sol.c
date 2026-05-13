/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 00:19:29 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/12 02:50:43 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;
	size_t	set_len;

	if (!s1)
		return (NULL);
	ptr = malloc(ft_strlen(s1 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
		{
			if (set[j] == set[ft_strlen(set) - 1])
			{
				ptr[k] = s1[i];
				k++;
			}
			j++;
		}
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strtrim("calambreta","mrt"));
	return (0);
}*/
