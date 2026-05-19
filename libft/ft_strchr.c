/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:01:56 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 18:49:18 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) ch)
			return ((char *)&str[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    // define a string
    const char* str = "GeeksforGeeks";
    // define a char ch to be searched in str
    char ch = 's';

    // Use strchr to find the first occurrence of the
    // character 's'
    const char* result = ft_strchr(str, ch);

    if (result != NULL) {
        // Calculate the position by subtracting the base
        // pointer from the result pointer
        printf("Character '%c' found at position: %ld\n",ch, result - str);
		printf("result: %s\n ",result);
    }
    else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}*/
