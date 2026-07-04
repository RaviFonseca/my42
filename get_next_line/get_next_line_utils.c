/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 21:13:52 by rfonseca          #+#    #+#             */
/*   Updated: 2026/06/21 11:56:09 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strdup(char *s)
{
	char	*s_dup;
	int		s_len;
	int		i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s) + 1;
	s_dup = (char *)malloc(sizeof(char) * s_len);
	if (!s_dup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		  s_dup[i] = s[i];
		  i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	int		i;
	int		j;
	int		len_total;

	if (!s1 || !s2)
		return (NULL);
	len_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)malloc(sizeof(char) * len_total);
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
