#include "push_swap.h"

//every functions return a void pointer so I can free and return NULL at the same time, usefull for lowering the number of lines of code needed in all the main functions

void *free_data(t_data *data) //used to free the main data function
{
    if(data == NULL)
        return(NULL);
    free_stack(data->a);
    free_stack(data->b);
    free(data);
    return(NULL);
}
void *free_stack(t_stack *stack) //used to free the circular double linked list
{
    t_node	*node;
	t_node	*next;
	int		i;

	if (stack == NULL)
		return (NULL);
	node = stack->top;
	i = 0;
	while (i < stack->size)
	{
		next = node->next;
		free(node);
		node = next;
		i++;
	}
	free(stack);
    return(NULL);
}

void	*free_stack_partial(t_stack *stack, t_node *head) //function used if malloc fucks up in the middle of creating the stack a
{
	t_node	*tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(stack);
	return (NULL);
}

void *free_parse_struct(t_parse *input_data) // main input parsing struct freeing function
{
    if(input_data == NULL)
        return(NULL);
    if(input_data->numbers != NULL)
        free_str_array(input_data->numbers);
    free(input_data);
    return(NULL);
}