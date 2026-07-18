#include "push_swap.h"

/*here everything is to convert the first struct we got from parsing the input, to a main data struct. We also check here for double numbers and if all the numbers 
valid. then we put them in a circular double linked list*/


t_data *init_data(t_parse *initial_input) /*initalize the main data struct, which will contain all the usefull 
informations I need and that I can pass through all my sorting functions from now on*/
{
    t_data *data;

    data = malloc(sizeof(t_data));
    if (data == NULL)
    {
        free_parse_struct(initial_input);
        return(NULL);
    }
    ft_memset(data, 0, sizeof(t_data)); //initialize everything to zero
    data->a = init_stack_a(initial_input->numbers); //initialize the stack a according to the numbers checked during input
    data->b = init_stack_b();
    if(data->a == NULL || data->b == NULL || check_for_doubles(initial_input->numbers) == 1) //check for doubles and if the malloc allocation of both stacks didn't fail
    {
        free_parse_struct(initial_input);
        return(free_data(data));
    }
    data->strategy = initial_input->strategy; //initialize the strategy
    data->adaptive = initial_input->adaptive; //initialize if y/n adaptive
    data->bench = initial_input->bench; //initialize the bench
    free_parse_struct(initial_input);
    return(data);
}

t_stack *init_stack_b(void) //creates our empty stack b
{
    t_stack *b;

    b = malloc(sizeof(t_stack));
    if(b == NULL)
        return(NULL);
    b->top = NULL;
    b->size = 0;
    return(b);
}

t_node *init_stack_node(char *nbr) /*function that creates the nodes used in the double linked list and fills them with a given number inputed as a string
it returns NULL if 1.malloc fucks up, 2. if checknumbers return NULL because the number is invalid. Lastly when we know the number is valid, we fill the value
of the node with ft_atoi from libc.*/
{
    t_node *node;
    char *nb;

    node = malloc(sizeof(t_node));
    if(node == NULL)
        return(NULL);
    node->next = NULL;
    node->prev = NULL;
    nb = check_nbr(nbr);
    if(nb == NULL)
    {
        free(node);
        return(NULL);
    }
    node->value = ft_atoi(nb);
    return(node);
}

t_stack *init_stack_a(char **numbers) /*here we initialize the stack a with the inputed number, creating the circular double linked list with init_stack_node
will return NULL if there's any problems*/
{
    t_stack *stack;
    t_node *top_node;
    t_node *node;
    t_node *node_bis;
    int i;

    i = 1;
    stack = malloc(sizeof(t_stack));
    if(stack == NULL)
        return(NULL);
    node = init_stack_node(numbers[0]);
    if(node == NULL)
        return (free_stack_partial(stack, NULL));
    top_node = node;
    while(numbers[i] != NULL)
    {
        node_bis = init_stack_node(numbers[i]);
        if(node_bis == NULL)
            return (free_stack_partial(stack, top_node));
        node->next = node_bis;
        node_bis->prev = node;
        node = node_bis;
        i++;
    }
    node->next = top_node;
    top_node->prev = node;
    stack->top = top_node;
    stack->size = i;
    return(stack);
}   

char *check_nbr(char *nbr) /*function that mimics the style of ft_atoi. because ft_atoi can't really signal if there's an error, I use this one to check if 
the number that is still given as a string doesn't overflow/underflow, if it's not a double, if there's no letters, no useless sign, etc... in the end if 
check_nbr doesn't return NULL, it means the number is 100% safe to pass through ft_atoi */
{
    long nb;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	nb = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
    if (nbr[i] == '\0')
        return(NULL);
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		nb = (nb * 10) + (nbr[i] - '0');
        if(sign == -1 && nb > 2147483648)
            return(NULL);
        if(sign == 1 && nb > 2147483647)
            return(NULL);
		i++;
	}
    if (nbr[i] != '\0')
        return(NULL);
    return(nbr);
}

int check_for_doubles(char **numbers)/*really simple double while loop function to check if there's no doubles in the list. 
not the most optimized but imo it's negligeable due to the max amount of numbers in push_swap*/
{
    int i;
    int j;

    i = 0;
    while(numbers[i] != NULL)
    {
        j = i + 1;
        while(numbers[j] != NULL)
        {
            if(ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
                return(1);
            j++;
        }
        i++;
    }
    return(0);
}