/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:18:27 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/14 01:44:23 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Helloworld";
    char *result;
    
    result = ft_strdup(str);
    if (result != NULL) {
        printf("Original string: %s\n", str);
        printf("Duplicated string: %s\n", result);
        free(result);  // Always free allocated memory
    } else {
        printf("Memory allocation failed\n");
    }
    
    return 0;
}*/
