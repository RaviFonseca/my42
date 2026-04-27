/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:08:33 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/27 16:57:54 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
    strcat(example, "ForGeeks");

    // Display the concatenated strings
    printf("%s\n", example);

    return 0;
}*/
