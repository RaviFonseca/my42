#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_parse //struct used to parse the initial data, only used in the beginning
{
    int     bench;//0 if no bench flag, 1 if yes
    int     strategy;//0 = no flag or adaptive, 1 = simple, 2 = medium, 3 = complex 
    int     adaptive;//0 if no adaptive flag, 1 if yes
    char    **numbers;//numbers inputed as a double char array
    int     count;//amount of numbers inputed
}   t_parse;

typedef struct s_node //node struct for the double circular linked list
{
    int             value;//the number inputed, changed to its rank after rank_and disorder function
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;

typedef struct s_stack //struct for each of the two stacks
{
    t_node  *top;
    int     size;//the amount of node in the stack
}   t_stack;

typedef struct s_data //main struct, contain all of the important information needed for the program to work
{
    t_stack *a;
    t_stack *b;
    int     ops[11];//operation counter, needed for the bench, incremented at each operations
    double  disorder;//calculated in rank_and_disorder
    int     strategy;//same as in t_parse
    int     adaptive;//same as in t_parse
    int     bench;//same as in t_parse
}   t_data;

//functions to parse/check the original input
t_parse *check_input(int argc, char **argv);
t_parse *init_input_data(void);
void	*fill_flag(t_parse *data, char *flag);
char    **dup_str_array(char **src);
int check_count(char **numbers);

//functions to convert the initial input to the main struct
t_data *init_data(t_parse *initial_input);
t_node *init_stack_node(char *nbr);
t_stack *init_stack_a(char **numbers);
t_stack *init_stack_b(void);
char *check_nbr(char *nbr);
int check_for_doubles(char **numbers);

//functions to calculate rank and disorder and lauch the appropriate algorithm
int push_swap(t_data *data);
double check_disorder(int *tab, int size);
void sorting_dispatcher(t_data *data);
int rank_and_disorder(t_data *data);
int fill_rank(int *tab, int n, int tab_size);

//opeartions functions
void sa(t_data *data);
void sb(t_data *data);
void ss(t_data *data);
void swap_stack(t_stack *stack);
void pa(t_data *data);
void pb(t_data *data);
t_node *detach_top_node(t_stack *stack);
void attach_top_node(t_stack *stack, t_node *node);
void ra(t_data *data);
void rb(t_data *data);
void rr(t_data *data);
void rotate_stack(t_stack *stack);
void rra(t_data *data);
void rrb(t_data *data);
void rrr(t_data *data);
void reverse_rotate_stack(t_stack *stack);

//simple algorithm sort
int selection_sort(t_data *data);
int find_stack_min(t_stack *stack);
void move_min_to_top(t_data *data);

//medium algo functions
int ft_sqrt(int nbr);
int is_in_chunk(int chunk_nbr, int size, int value, int index);
void chunk_to_b(t_data *data, int chunk_nbr, int size);
int find_chunk_max(t_data *data);
void sort_to_a(t_data *data);
void chunk_sort(t_data *data);

//complex algo functions
void bit_move(t_data *data, int index);
void stack_bit_check(t_data *data, int index);
void move_to_a(t_data *data);
int max_bits(t_stack *stack);
void bit_radix(t_data *data);

//bench_output functions
void output_bench(t_data *data);
void output_disorder(double disorder);
void output_total_ops(int *ops);
void output_strategy(int adaptive, int strategy);
void output_operation_nbr(int *operations);

//utils fonction
int error_message(void);

//free functions
void *free_data(t_data *data);
void *free_stack(t_stack *stack);
void *free_stack_partial(t_stack *stack, t_node *head);
void *free_partial(char **tab, int index);
void *free_str_array(char **tab);
void *free_parse_struct(t_parse *input_data);

#endif