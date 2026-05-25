/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:59:03 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/25 15:52:05 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd')
			{
				i++;
				write (1, "decimal\n", 9);
			}
			else if (str[i] == 's')
			{
				i++;
				write (1, "string\n", 8);
			}
			else if (str[i] == 'c')
			{
				i++;
				write (1, "char\n", 6);
			}
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	print("%c %d %s");
	return (0);
}
