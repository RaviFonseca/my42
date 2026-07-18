/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:34:14 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/08 17:36:48 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charsetcheck(int c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	size;
	char	*str;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (charsetcheck(s1[start], set) == 1)
		start++;
	size = ft_strlen(s1);
	while (size > start && charsetcheck(s1[size - 1], set) == 1)
		size--;
	str = malloc(sizeof(char) * ((size - start) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < size)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
	char str[12] = "hello world\0";
	char sep[4] = "eo \0";
	printf("%s\n", ft_strtrim(str, sep));
	return(0);
}*/
