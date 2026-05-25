/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:47:15 by rfonseca          #+#    #+#             */
/*   Updated: 2026/02/16 18:46:26 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (nb < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr (n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}
/*
int	main(void){

	int nbr = -2147483648;
	ft_putnbr(nbr);
	write(1, "\n",1);
	return (0);
}
*/
