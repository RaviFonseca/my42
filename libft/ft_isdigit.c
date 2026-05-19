/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:06:39 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 16:45:37 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void){
	printf("5 ft:%d\n",ft_isdigit('5'));
        printf("5 og:%d\n\n",isdigit('5'));

        printf("a ft:%d\n",ft_isdigit('a'));
        printf("a og:%d\n\n",isdigit('a'));
	return(0);
}*/
