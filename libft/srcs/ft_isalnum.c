#include <unistd.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c<= 'Z') ||(c >= 'a' && c<= 'z') || (c >= '0' && c<= '9'))
	       return (8);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("5 ft:%d\n",ft_isalnum('5'));
        printf("5 og:%d\n\n",isalnum('5'));

        printf("a ft:%d\n",ft_isalnum('a'));
        printf("a og:%d\n\n",isalnum('a'));

	printf("@ ft:%d\n",ft_isalnum('@'));
	printf("@ og:%d\n",isalnum('@'));
	return(0);
}*/
