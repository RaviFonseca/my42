/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:18:27 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 19:06:19 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("no value ft:%ld\n",ft_strlen(""));
	printf("no value og:%ld\n\n",strlen(""));

	printf("banana ft:%ld\n",ft_strlen("banana"));
        printf("banana og:%ld\n\n",strlen("banana"));

	printf("supercalidoucaligralicious ft: %ld
	\n",ft_strlen("supercalidoucaligralicious"));
        printf("supercalidoucaligralicious:%ld
	\n\n",strlen("supercalidoucaligralicious"));

	return (0);
}*/
