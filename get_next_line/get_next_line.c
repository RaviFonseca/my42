/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 21:09:22 by rfonseca          #+#    #+#             */
/*   Updated: 2026/06/24 02:24:53 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*read_to_stash(int fd, char *stash)
{
	char	*buffer;
	char	*tmp;
	int		bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && (stash == NULL || ft_strchr(stash,  '\n') == NULL))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		if (stash == NULL)
			stash = ft_strdup(buffer);
		else
		{
			tmp = ft_strjoin(stash, buffer);
			free(stash);
			stash = tmp;
		}
	}
	free(buffer);
	return (stash);
}

static char	*extract_line(char *stash)
{
  	char	*newline;
	char	*line;
	int		size;
	int		i;

	if (!stash || !*stash)
		return (NULL);
	newline = ft_strchr(stash, '\n');
	if (newline)
		size = (newline - stash) + 2;
	else
		size = ft_strlen(stash) + 1;
	line = malloc(size);
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char *save_rest(char *stash)
{
	char	*newline;
	char	*rest;
	int		i;
	int		j;
	int		size;

	newline = ft_strchr(stash, '\n');
	if (!newline)
		return (NULL);
	size = ft_strlen(newline + 1) + 1;
	rest = malloc(size);
	if (!rest)
		return (NULL);
	i = (newline - stash) + 1;
	j = 0;
	while (stash[i])
	{
		rest[j] = stash[i];
		i++;
		j++;
	}
	rest[j] = '\0';
	return (rest);
}
	 
char	*get_next_line(int fd)
{
	static char	*stash;

	(void)fd;
	(void)stash;
	return (NULL);
}

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
	/*int fd;
    static char *stash;
  
    fd = open("file.txt", O_RDONLY);
    stash = read_to_stash(fd, stash);
    static char    *line;
	line = extract_line(stash);
    printf("[%s]\n", line);
    close(fd);*/
	
    char    *stash;
    char    *line;

    stash = ft_strdup("Olá Mundo");

    line = extract_line(stash);

    printf("[%s]\n", line);
	free(stash);
    free(line);

}

