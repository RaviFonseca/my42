#include "push_swap.h"

//every functions return a void pointer so I can free and return NULL at the same time, usefull for lowering the number of lines of code needed in all the main functions

void	*free_partial(char **tab, int index) // used to free if there's a problem occuring during the memory allocation of a double array before completion
{
	int	i;

	i = 0;
	while (i < index)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

void	*free_str_array(char **tab) // used to free a completed double array
{

	int	i;

	i = 0;
    if(tab == NULL)
        return(NULL);
	while (tab[i])
    {
        free(tab[i]);
        i++;
    }
	free(tab);
    return(NULL);
}