/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:24:33 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/15 16:57:43 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freetab(char **tab, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	wordcount(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

static size_t	len_check(char const *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static int	fill(char **splited, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i != 0 && s[i] != c && s[i - 1] == c))
		{
			splited[j] = ft_substr(s, i, len_check(s, c, i));
			if (splited[j] == NULL)
				return (freetab(splited, j), 0);
			j++;
		}
		i++;
	}
	splited[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;

	if (s == NULL)
		return (NULL);
	splited = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (splited == NULL)
		return (NULL);
	if (!fill(splited, s, c))
		return (NULL);
	return (splited);
}

/*void putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void printtab(char **tab)
{
	int i = 0;
	while(tab[i])
	{
		putstr(tab[i]);
		i++;
	}
}

int main(void)
{
	printtab(ft_split("   hello   world more        check    ", ' '));
	return(0);
}*/
