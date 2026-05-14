/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:09:47 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/14 19:06:00 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t counter(char const *s, char delimeter)
{
	size_t	i;
	size_t	words;

	i = 0;
	if (s[0] == delimeter)
		words = 0;
	else
		words = 1;
	while (s[i] != '\0')
	{
		if (s[i] != delimeter && s[i - 1] == delimeter)
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	
	char	**new_array;
	size_t	start;
	size_t	end;
	size_t	len;

	new_array = malloc((char *)sizeof * (words + 1));
	(!new_array)
		return (NULL);


#include <stdio.h>

int  main()
{
	size_t result = counter("  Ola mundo 42", ' ');
	printf("nr of words %ld \n", result);
	return (0);
}
