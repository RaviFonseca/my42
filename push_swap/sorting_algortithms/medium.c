#include "push_swap.h"

/*chunk_sort algorithm, we divide all the numbers in n chunks according to their rank (n being the square root of the amount of numbers inputed)
then we rotate stack a to find all the numbers from each chunk and push them b. B is then already pretty well sorted so we do one last sort while pushing
everything to a

this one has room for improvement, I have a bit more than 8000 operations if 500 numbers are inputed, but I'd like to get sub 8000 for the good notation mark*/

int ft_sqrt(int nbr)
{
    int i;

    i = 1;
    while((i * i) <= nbr)
        i++;
    return(i - 1);
}

int is_in_chunk(int chunk_nbr, int size, int value, int index)
{
    int min_chunk_value;
    int max_chunk_value;
    int chunk_size;

    chunk_size = size / chunk_nbr;
    max_chunk_value = size -1;
    min_chunk_value = chunk_size * index;
    if(index < chunk_nbr - 1)
    {
        min_chunk_value = chunk_size * index;
        max_chunk_value = min_chunk_value + chunk_size;
    }
    if(value >= min_chunk_value && value < max_chunk_value)
        return (1);
    else
        return (0);
}

void chunk_to_b(t_data *data, int chunk_nbr, int size)
{
    int index;
    int i;

    index = 0;
    i = 0;
    while (data->a->size > 1)
    {
        if(is_in_chunk(chunk_nbr, size, data->a->top->value, index) == 1)
        {
            pb(data);
            i++;
        }
        else
            ra(data);
        if(i == (size / chunk_nbr) && index < chunk_nbr - 1)
        {
            index++;
            i = 0;
        }
    }
}

int find_chunk_max(t_data *data)
{
    t_node *node;
    int i;

    node = data->b->top;
    i = 0;
    while(i < data->b->size)
    {
        if(node->value == data->a->top->value - 1)
            break;
        node = node->next;
        i++;
    }
    if(i <= data->b->size / 2)
        return(i);
    else
        return(i - data->b->size);
}

void sort_to_a(t_data *data)
{
    int i;

    while(data->b->size > 0)
    {
        i = find_chunk_max(data);
        while(i < 0)
        {
            rrb(data);
            i++;
        }
        while(i > 0)
        {
            rb(data);
            i--;
        }
        pa(data);
    }
}

void chunk_sort(t_data *data)
{
    int chunk_nbr;
    int size;

    size = data->a->size;
    chunk_nbr = ft_sqrt(size);
    chunk_to_b(data, chunk_nbr, size);
    sort_to_a(data);
}
