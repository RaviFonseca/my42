/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 01:07:04 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 19:18:53 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char c, char const *set)
{
	while (*set && c != *set)
		set++;
	return (c == *set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	while (s1[first] && ft_isset(s1[first], set))
		first++;
	last = ft_strlen(s1);
	while (last > first && ft_isset(s1[last - 1], set))
		last--;
	if (first == last)
		return (ft_strdup(""));
	len = last - first;
	return (ft_substr(s1, first, len));
}
/*
int main(){

	printf("%s\n",ft_strtrim("****test***","e"));
	return 0;
}*/
