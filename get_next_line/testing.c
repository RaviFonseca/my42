/*#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
	int fd;
	static char *stash;

	fd = open("test.txt", O_RDONLY);
	stash = read_to_stash(fd, stash);
	char    *newline;

	newline = ft_strchr(stash, '\n');
	printf("%ld\n", newline - stash);
	close(fd);
}*/
