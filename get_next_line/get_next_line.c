/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 21:09:22 by rfonseca          #+#    #+#             */
/*   Updated: 2026/07/14 19:03:39 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static int	line_size(char *stash)
{
	char	*newline;

	newline = ft_strchr(stash, '\n');
	if (newline)
		return ((newline - stash) + 2);
	return (ft_strlen(stash) + 1);
}

static char	*read_to_stash(int fd, char *stash)
{
	char	*buffer;
	int		bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && (!stash || !ft_strchr(stash, '\n')))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		stash = join_and_free(stash, buffer);
	}
	free(buffer);
	return (stash);
}

static char	*extract_line(char *stash)
{
	char	*line;
	int		i;

	if (!stash || !*stash)
		return (NULL);
	line = malloc(line_size(stash));
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

static char	*save_rest(char *stash)
{
	char	*newline;
	char	*rest;
	int		i;
	int		j;
	int		size;

	newline = ft_strchr(stash, '\n');
	if (!newline)
		return (NULL);
	if (!*(newline + 1))
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
	char		*line;
	char		*new_stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_to_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	if (!line)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	new_stash = save_rest(stash);
	free(stash);
	stash = new_stash;
	return (line);
}
/*
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
	int fd = open("file.txt", O_RDONLY);
    char    *line;
	
	while (( line = get_next_line(fd)) != NULL)
	{
		printf("[%s]\n", line);
		free(line);
	}

	close(fd);
}*/
