#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	dest =(char*) malloc((ft_strlen(src)+1) * sizeof(char));
	if (!dest)
	{
		dest = NULL;
		return (dest);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}	

#include <stdio.h>

int	main(int argc, char **argv)
{
	//char src[]= "banana";
	char *dest = ft_strdup(argv[1]);
	printf("nr de argumentos: %d , parametro duplicado: %s\n",argc,  dest);
	return(0);
}
