/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:47:15 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/30 15:18:10 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putunsigned(unsigned int n)
{
	if (n >= 10)
		return (ft_putunsigned(n / 10) + ft_putchar((n % 10) + '0'));
	else
		return (ft_putchar(n + '0'));
}
/*
#include <stdio.h>

int	main(void){

	int nbr = 123;
	int counter = ft_putnbr(nbr);
	printf("\n %d\n",counter);
	//write(1, "\n",1);
	return (0);
}
*/
