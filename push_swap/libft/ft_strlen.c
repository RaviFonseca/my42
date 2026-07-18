/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:31:51 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 15:36:54 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int main(void)
{
	char *str = "helkfghrifrifrgirghhlo world";
	int test;
	size_t size = ft_strlen(str);
	test = (int)size;
	printf("%d", test);
	return(0);
}*/
