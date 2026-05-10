/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:03:36 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/11 00:23:52 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ptr;
	size_t	ptr_len;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	ptr_len = i + ft_strlen(s2) + 1;
	ptr = malloc((ptr_len) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, i);
	ft_memcpy(ptr + i, s2, ft_strlen(s2) + 1);
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	// Display the concatenated strings
 	printf("%s\n", ft_strjoin("Geeks","ForGeeks"));
    return 0;
 }*/
