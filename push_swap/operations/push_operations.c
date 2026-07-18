#include "push_swap.h"

/*main operations of my algorithms. two central functions: 
-> detach_top_node that removes the top node and fix the stack by linking the former prev and next nodes together and puting the former next node to the top. 
-> attach_top_node to move the top node that we get from the last function, to be the new top node of the other stack, linking it to the prev node and linking
the former top node as its next one
-> pa and pb both use those two functions, then output the operation used and increment the operation count in the struct t_data*/

void pa(t_data *data)
{
    t_node *node;
   
    if (data->b->size == 0)
        return;
    node = detach_top_node(data->b);
    attach_top_node(data->a, node);
    write(1, "pa\n", 3);
    data->ops[3]++;
}

void pb(t_data *data)
{
    t_node *node;

    if(data->a->size == 0)
        return;
    node = detach_top_node(data->a);
    attach_top_node(data->b, node);
    write(1, "pb\n", 3);
    data->ops[4]++;
}
t_node *detach_top_node(t_stack *stack)
{
    t_node *node;

    node = stack->top;
    if(stack->size == 1)
        stack->top = NULL;
    else
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        stack->top = node->next;
    }
    stack->size--;
    return(node);
}
void attach_top_node(t_stack *stack, t_node *node)
{
	if (stack->size == 0)
	{
		node->next = node;
		node->prev = node;
	}
	else
	{
		node->next = stack->top;
		node->prev = stack->top->prev;
		stack->top->prev->next = node;
		stack->top->prev = node;
	}
	stack->top = node;
	stack->size++;
}