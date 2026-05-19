/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:01:56 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 19:15:57 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char) ch)
			return ((char *)&str[i]);
		i--;
	}
	if ((char)ch == str[0])
		return ((char *)&str[i]);
	return (NULL);
}
/*
// C program to illustrate
// the strrchr() function
#include <stdio.h>
#include <string.h>

int main()
{
    // initializing string
    char str[] = "GeeksforGeeks";

    // character to be searched
    char chr = 'k';

    // Storing pointer returned by
    char* ptr = ft_strrchr(str, chr);

    // getting the position of the character
    if (ptr) {
        printf("Last occurrence of %c in %s is at index %ld\n"
		,chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s\n", chr, str);
    }
    return 0;
}*/
