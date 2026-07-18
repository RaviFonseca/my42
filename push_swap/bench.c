#include "push_swap.h"

/*basic and definetly not the most beautiful code ever writte for outputing the bench, could be done with ft_printf but mine is not
perfectly finished so I prefer just to use the basic functions of the original libft*/

void output_bench(t_data *data)
{
    output_disorder(data->disorder);
    output_strategy(data->adaptive, data->strategy);
    output_total_ops(data->ops);
    output_operation_nbr(data->ops);
}
void output_disorder(double disorder)
{
    int nbr;

    nbr = disorder * 10000;
    ft_putstr_fd("[bench] disorder: ", 2);
    ft_putnbr_fd(nbr / 100, 2);
    write(2, ".", 1);
    if ((nbr % 100) > 10)
        write(2, "0", 1);
    ft_putnbr_fd(nbr % 100, 2);
    ft_putstr_fd("%\n", 2);
}
void output_total_ops(int *ops)
{
    int total_ops;
    int i;

    i = 0;
    total_ops = 0;
    while (i <= 10)
        total_ops += ops[i++];
    ft_putstr_fd("[bench] total_ops: ", 2);
    ft_putnbr_fd(total_ops, 2);
    write(2, "\n", 1);
}
void output_strategy(int adaptive, int strategy)
{
    ft_putstr_fd("[bench] strategy: ", 2);
    if (adaptive == 1)
    {
        ft_putstr_fd("Adaptive / ", 2);
        if (strategy == 1)
            ft_putstr_fd("O(n^2)\n", 2);
        if (strategy == 2)
            ft_putstr_fd("O(n sqrt(n))\n", 2);
        if (strategy == 3)
            ft_putstr_fd("O(n log n)\n", 2);
    }
    else
    {
        if (strategy == 1)
            ft_putstr_fd("Simple / O(n^2)\n", 2);
        if (strategy == 2)
            ft_putstr_fd("Medium / O(n sqrt(n))\n", 2);
        if (strategy == 3)
            ft_putstr_fd("Complex / O(n log n)\n", 2);
    }
}

void output_operation_nbr(int *operations)
{
    ft_putstr_fd("[bench] ", 2);
    ft_putstr_fd("sa: ", 2);
    ft_putnbr_fd(operations[0], 2);
    ft_putstr_fd(" sb: ", 2);
    ft_putnbr_fd(operations[1], 2);
    ft_putstr_fd(" ss: ", 2);
    ft_putnbr_fd(operations[2], 2);
    ft_putstr_fd(" pa: ", 2);
    ft_putnbr_fd(operations[3], 2);
    ft_putstr_fd(" pb: ", 2);
    ft_putnbr_fd(operations[4], 2);
    ft_putstr_fd("\n[bench] ", 2);
    ft_putstr_fd("ra: ", 2);
    ft_putnbr_fd(operations[5], 2);
    ft_putstr_fd(" rb: ", 2);
    ft_putnbr_fd(operations[6], 2);
    ft_putstr_fd(" rr: ", 2);
    ft_putnbr_fd(operations[7], 2);
    ft_putstr_fd(" rra: ", 2);
    ft_putnbr_fd(operations[8], 2);
    ft_putstr_fd(" rrb: ", 2);
    ft_putnbr_fd(operations[9], 2);
    ft_putstr_fd(" rrr: ", 2);
    ft_putnbr_fd(operations[10], 2);
    write(2, "\n", 1);
}

void output_data(t_data *data)
{
    int i;
    int check;
    t_node *node;

    i = 0;
    check = 0;
    node = data->a->top;
    while(i < data->a->size)
    {
        ft_putnbr_fd(node->value, 2);
        write(2, "->", 2);
        if(node->prev->value > node->value)
            check++;
        i++;
        node = node->next;
    }
    if(check > 1)
        ft_putstr_fd("\n\nerror\n", 2);
    if(check == 1)
        ft_putstr_fd("\n\ngood\n", 2);
}