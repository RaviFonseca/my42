#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arrInts;
	int	i;

	i = 0;
	if (min > max)
		return NULL;
	len = max - min;
	arrInts = (int*)malloc((len * 2) * sizeof(int));
	if (!arrInts)
		return NULL;
	while(min < max)
	{
		arrInts[i] = min;
		i++;
		min++;
	}
	return (arrInts);
}

#include <stdio.h>

int main(void)
{
	int min = 8;
	int max = 2;
	int i = 0;
	int len = max - min;
	int *range = ft_range(min,max);
	while ( i < len)
	{
		printf("%d ",range[i]);
		i++;
	}
	printf("\n");
	return (0);
}
