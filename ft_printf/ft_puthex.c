/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 14:08:53 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/31 17:35:27 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char *base)
{
	if (n >= 16)
		return (ft_puthex((n / 16), base) + ft_putchar(base[n % 16]));
	return (ft_putchar(base[n]));
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_puthex(123,"0123456789abcdef"));
	return (0);
}*/
