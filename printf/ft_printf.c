/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:50:51 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/31 00:20:55 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list args)
{
	void	*ptr;

	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned long), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned long), "0123456789ABCDEF"));
	else if (c == 'p')
	{
		write (1, "0x", 2);
		ptr = va_arg(args, void *);
		return (2 + ft_puthex((unsigned long)ptr, "0123456789abcdef"));
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_format(str[i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>

int main(){

	int count;

	ft_printf("%x\n", 42);
	printf("%x\n", 42);

	ft_printf("%X\n", 42);
	printf("%X\n", 42);

	ft_printf("%p\n", &count);
	printf("%p\n", &count);

	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("%u\n", 4294967295u);
	printf("%u\n", 4294967295u);
	return (0);
}*/
