/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:23:32 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 16:16:03 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i] - 48);
		i++;
	}
	return (val);
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
