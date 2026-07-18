#include "push_swap.h"

/*none of those are used right now, maybe we could use rr or rrr to speed up the chunk_sort ? depending on how usefull it would be, in my opinion, sa sb and ss 
are completely useless for my algorithms*/

void sa(t_data *data)
{
    swap_stack(data->a);
    write(1, "sa\n", 3);
    data->ops[0]++;
}

void sb(t_data *data)
{
    swap_stack(data->b);
    write(1, "sb\n", 3);
    data->ops[1]++;
}

void ss(t_data *data)
{
    swap_stack(data->a);
    swap_stack(data->b);
    write(1, "ss\n", 3);
    data->ops[2]++;
}
void swap_stack(t_stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->top->value;
	stack->top->value = stack->top->next->value;
	stack->top->next->value = tmp;
}

void rr(t_data *data)
{
    rotate_stack(data->a);
    rotate_stack(data->b);
    write(1, "rr\n", 3);
    data->ops[7]++;
}

void rrr(t_data *data)
{
    reverse_rotate_stack(data->a);
    reverse_rotate_stack(data->b);
    write(1, "rrr\n", 4);
    data->ops[10]++;
}