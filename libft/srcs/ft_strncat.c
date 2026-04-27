/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:08:33 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/27 17:21:45 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

// Driver code
int main()
{
    // Define a temporary variable
    char example[100];

    // Copy the first string into
    // the variable
    strcpy(example, "Geeks");

    // Concatenate this string
    // to the end of the first one
    ft_strncat(example, "ForGeeks",5);

    // Display the concatenated strings
    printf("%s\n", example);

    return 0;
}*/
