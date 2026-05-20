/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:23:32 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/20 17:00:04 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	val;
	int	sign;

	i = 0;
	val = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i] - 48);
		i++;
	}
	return (val * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
   int val;
   char *str; 
   str = "15546.10E";
   val = ft_atoi(str); 
   printf("integral number = %d\n", val);
}*/
