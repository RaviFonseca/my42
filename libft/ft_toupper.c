/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:18:08 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 19:24:39 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("a ft: %c\n",ft_toupper('a'));
	printf("a og: %c\n\n",toupper('a'));

	printf("C ft: %c\n",ft_toupper('C'));
        printf("C og: %c\n\n",toupper('C'));

	printf("5 ft: %c\n",ft_toupper('5'));
        printf("5 og: %c\n\n",toupper('5'));

	printf("= ft: %c\n",ft_toupper('='));
        printf("= og: %c\n\n",toupper('='));
	return (0);
}*/
