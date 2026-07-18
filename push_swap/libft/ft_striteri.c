/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:30:03 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 18:25:08 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void change_to_alpha(unsigned int i, char *c)
{
	if(c[i] == 0)
		return ;
	if(i < 26)
		c[i] = 'a' + i;
	if(i > 26)
		c[i] = 'a' + i / 26;
}

int main(void)
{
	char str[12] = "hello world\0";
	ft_striteri(str, change_to_alpha);
	printf("%s", str);
	return(0);
}*/
