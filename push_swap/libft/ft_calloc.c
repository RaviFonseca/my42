/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:11:11 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/15 16:59:54 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	buffer = malloc(count * size);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, (count * size));
	return (buffer);
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
	test = ft_calloc(10000000, 100000);
	ft_memset(test, 45, 6);
	write(1, "check\n",6);
	ft_putstr_non_printable((char *)test, 50);
	return(0);
}*/
