/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:09:47 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/15 14:08:21 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	counter(char const *s, char delimeter)
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

static char	*get_words(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	return (ft_substr(s, start, len));
}

static void	free_all(char **arr, size_t j)
{
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
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
			new_array[j] = get_words(s, c, &i);
			if (!new_array[j])
				return (free_all(new_array, j), NULL);
			j++;
		}
	}
	new_array[j] = NULL;
	return (new_array);
}
/*
#include <stdio.h>

int  main()
{
	char *s = "  Ola mundo 42";
	size_t result = counter("  Ola mundo 42", ' ');
	printf("nr of words %ld \n", result);
	char **v  = ft_split(s, ' ');
	while (*v)
		printf("%s\n", *v++);
	return (0);
}*/
