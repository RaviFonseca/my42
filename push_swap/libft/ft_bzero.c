/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:09:53 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 15:20:48 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nonprinthex(char c)
{
	char	*hex;
	int		dec;
	int		unit;

	hex = "0123456789abcdef";
	dec = (c / 16);
	unit = (c % 16);
	write(1, "\\", 1);
	ft_putchar(hex[dec]);
	ft_putchar(hex[unit]);
}

void	ft_putstr_non_printable(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			ft_putchar(str[i]);
		else
			nonprinthex(str[i]);
		i++;
	}
}

int main(void)
{
	void *test;
	char str[11] = "hello world";
	test = &str;
	ft_bzero(test, 14);
	ft_putstr_non_printable((char *)test, 11);
	return(0);
}*/
