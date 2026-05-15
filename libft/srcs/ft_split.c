/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:09:47 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/15 04:07:38 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t counter(char const *s, char delimeter)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != delimeter && (i == 0 || s[i - 1] == delimeter))
			words++;
		i++;
	}
	return (words);
}

char	get_word(char const *s, char c, size_t *i)
{
	size_t start
	size_t len;

	start = i;
	while (s[i] && s[i] != c)
		i++;
		len = i - start;
		
}


char	**ft_split(char const *s, char c)
{
	
	char	**new_array;
	size_t	start;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	new_array = malloc(sizeof(char *) * (counter (s, c) + 1));
	if (!new_array)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			new_array[j] = ft_substr(s, start, len);
			j++;
		}
	}
	new_array[j] = NULL;
	return (new_array);
}

#include <stdio.h>

int  main()
{
	size_t result = counter("  Ola mundo 42", ' ');
	printf("nr of words %ld \n", result);
	return (0);
}
