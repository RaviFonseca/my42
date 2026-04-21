/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:16:34 by rfonseca          #+#    #+#             */
/*   Updated: 2026/04/21 18:16:49 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = str;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include<string.h>

int main(void)
{
	char s1[]="vamos testar de novo";
	char s2[]="vamos testar de novo";
	printf("s1:%s\n",s1);
	printf("s2:%s\n",s2);
	ft_bzero(s1+5,5);
	bzero(s2+5,5);
	printf("s1:%s\n",s1);
	printf("s2:%s\n",s2);

	write(1, &s1, 20);
	printf("\n");
	write(1, &s2, 20);
	return (0);
}*/
