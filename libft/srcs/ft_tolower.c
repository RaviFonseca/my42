/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:18:08 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/20 17:05:23 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("A ft: %c\n",ft_tolower('A'));
	printf("A og: %c\n\n",tolower('A'));

	printf("c ft: %c\n",ft_tolower('c'));
        printf("c og: %c\n\n",tolower('c'));

	printf("5 ft: %c\n",ft_tolower('5'));
        printf("5 og: %c\n\n",tolower('5'));

	printf("= ft: %c\n",ft_tolower('='));
        printf("= og: %c\n\n",tolower('='));
	return (0);
}*/
