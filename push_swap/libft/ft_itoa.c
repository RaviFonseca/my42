/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:13:48 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/07 11:14:42 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizecalc(int n)
{
	int		size;
	long	nbr;

	nbr = n;
	size = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	long	nbr;
	char	*rv;

	size = (sizecalc(n) - 1);
	nbr = n;
	rv = malloc (sizeof(char) * (size + 2));
	if (rv == NULL)
		return (NULL);
	if (nbr < 0)
	{
		rv[0] = '-';
		nbr *= -1;
	}
	while (nbr > 9)
	{
		rv[size] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	rv[size] = nbr % 10 + '0';
	rv[sizecalc(n)] = '\0';
	return (rv);
}

/*#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(42)));
	return(0);
}*/
