#include "push_swap.h"

/*basic selection sort algorithm, we find the smallest value in stack a, ra or rra depending where it's placed to put it on top, then push b.
we do this until there's only one element left in stack a(wich will obviously is the highest value) than push everything from b to a. because
stack b will already be sorted from highest to smallest it will then be inverted in a to go from smallest to highest*/

int selection_sort(t_data *data)
{
    if(data->a->size == 1)
        return(0);
    while(data->a->size > 1)
    {
        move_min_to_top(data);
        pb(data);
    }
    while(data->b->size > 0)
        pa(data);
    return(1);
}

int find_stack_min(t_stack *stack)
{
    t_node *node;
    int coordinates[2];
    int i;

    node = stack->top;
    i = 0;
    coordinates[0] = node->value;
    coordinates[1] = i;
    while(i < stack->size)
    {
        if (node->value < coordinates[0])
        {
            coordinates[0] = node->value;
            coordinates[1] = i;
        }
        node = node->next;
        i++;
    }
    return(coordinates[1] + 1);
}

void move_min_to_top(t_data *data)
{
    int i;
    int j;

    i = find_stack_min(data->a);
    if(i == 1)
        return;
    if(i <= data->a->size/2 + 1)
    {
        j = i - 1;
        while(j > 0)
        {
            ra(data);
            j--;
        }
    }
    else
    {
        j = (data->a->size - i) + 1;
        while(j > 0)
        {
            rra(data);
            j--;
        }
    }
}
