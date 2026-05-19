/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:07:51 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 16:46:45 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (0);
	return (16384);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("a ft:%d\n",ft_isprint('a'));
	printf("a og:%d\n\n",isprint('a'));

	printf("120 ft:%d\n",ft_isprint(120));
        printf("120 og:%d\n\n",isprint(120));

	printf("newline ft:%d\n",ft_isprint('\n'));
        printf("newline og:%d\n\n",isprint('\n'));

	printf("espace ft:%d\n",ft_isprint(' '));
        printf("espace og:%d\n\n",isprint(' '));
	return(0);
}*/
