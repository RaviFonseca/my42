/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:31:44 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/18 21:06:29 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	
	printf("5 ft:%d\n",ft_isalpha('5'));
        printf("5 og:%d\n\n",isalpha('5'));

        printf("a ft:%d\n",ft_isalpha('a'));
        printf("a og:%d\n\n",isalpha('a'));
	return(0);
}*/
