/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:06:00 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/20 16:06:06 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void){

	printf("5 ft:%d\n",ft_isascii('5'));
        printf("5 og:%d\n\n",isascii('5'));

	printf("a ft:%d\n",ft_isascii('a'));
        printf("a og:%d\n\n",isascii('a'));

	printf("0x80 ft:%d\n",ft_isascii(0x80));
	printf("0x80 og:%d\n\n",isascii(0x80));
	return(0);
}*/
