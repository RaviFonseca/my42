#include "push_swap.h"

/*
-> rotate_stack rotate by one the stack(as a doubled circular linked list), the top->next node gets at the top, so everything shifts by one place
-> reverse_rotate_stack is the opposite, this time top->prev node becomes the first node
the rest of the functions uses one of both on the according stack depending on whatt they're supposed to do, then output their names and increment their ops counter.
*/

void rotate_stack(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->top = stack->top->next;
}

void	reverse_rotate_stack(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->top = stack->top->prev;
}

void ra(t_data *data)
{
    rotate_stack(data->a);
    write(1, "ra\n", 3);
    data->ops[5]++;
}

void rb(t_data *data)
{
    rotate_stack(data->b);
    write(1, "rb\n", 3);
    data->ops[6]++;
}

void rra(t_data *data)
{
    reverse_rotate_stack(data->a);
    write(1, "rra\n", 4);
    data->ops[8]++;
}

void rrb(t_data *data)
{
    reverse_rotate_stack(data->b);
    write(1, "rrb\n", 4);
    data->ops[9]++;
}