/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:38:57 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/06 19:04:27 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	i = 0;
	if (n > 0)
	{
		while ((i < n - 1) && s2[i])
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}
	return (len_s2);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[50];
	char s2[50] = "hello world!";
	size_t len = ft_strlcpy(s1,s2,5);
	printf("%ld  %s\n",len,s1);
	return(0);
}*/
