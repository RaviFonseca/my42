#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main(void){
	printf("5 ft:%d\n",ft_isdigit('5'));
        printf("5 og:%d\n\n",isdigit('5'));

        printf("a ft:%d\n",ft_isdigit('a'));
        printf("a og:%d\n\n",isdigit('a'));
	return(0);
}
