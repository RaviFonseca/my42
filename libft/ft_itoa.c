/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:31:23 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 16:47:37 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digits(int n)
{
	int	tmp;
	int	i;

	if (n == 0)
		return (1);
	tmp = n;
	i = 0;
	if (n < 0)
		i++;
	while (tmp != 0)
	{
		tmp /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;
	size_t	is_negative;

	if (n == 0)
		return (ft_strdup("0"));
	is_negative = (n < 0);
	nb = n;
	if (nb < 0)
		nb = -nb;
	i = digits(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	while (nb != 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}*/
