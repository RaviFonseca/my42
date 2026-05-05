/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:01:26 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/04 17:24:53 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	to_fill;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	to_fill = size - dest_len - 1;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && (to_fill != 0))
	{
		dest[dest_len + i] = src[i];
		to_fill--;
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/* 
#include <stdio.h>
#include <string.h>

 // Driver code
 int main()
 {
     // Define a temporary variable
	 char example[20];

     // Copy the first string into
     // the variable
     strcpy(example, "Geeks");

     // Concatenate this string
     // to the end of the first one
     ft_strlcat(example, "ForGeeks",20 );

     // Display the concatenated strings
     printf("%s\n", example);

     return 0;
 }*/
