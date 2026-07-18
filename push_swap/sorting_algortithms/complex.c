#include "push_swap.h"

/*a radix sort algorithm that compares the bits of each numbers and not their decimal (the official name is radix LSD if I'm not mistaken) a lot 
of good videos on youtube cover this one, and it's a bit hard to explain here :( */

void bit_move(t_data *data, int index)
{
    int value;

    value = data->a->top->value;
    value = value >> index;
    if ((value & 1) == 0)
        pb(data);
    else
        ra(data);
}

void stack_bit_check(t_data *data, int index)
{
    int size;
    int i;

    size = data->a->size;
    i = 0;
    while (i < size)
    {
        bit_move(data, index);
        i++;
    }
}

void move_to_a(t_data *data)
{
    int size;

    size = data->b->size;
    while (size > 0)
    {
        pa(data);
        size--;
    }
}

int max_bits(t_stack *stack)
{
    int big;
    int bits;

    bits = 0;
    big = stack->size - 1;
    while (big > 0)
    {
        big = big >> 1;
        bits++;
    }
    return (bits);
}

void bit_radix(t_data *data)
{
    int index;
    int index_max;

    index = 0;
    index_max = max_bits(data->a);
    while (index < index_max)
    {
        stack_bit_check(data, index);
        move_to_a(data);
        index++;
    }
}