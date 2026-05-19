/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:59:40 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 16:36:16 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (8);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("5 ft:%d\n",ft_isalnum('5'));
        printf("5 og:%d\n\n",isalnum('5'));

        printf("a ft:%d\n",ft_isalnum('a'));
        printf("a og:%d\n\n",isalnum('a'));

	printf("@ ft:%d\n",ft_isalnum('@'));
	printf("@ og:%d\n",isalnum('@'));
	return(0);
}*/
