#include "push_swap.h"

/*kind of the heart of the program, here we already have all of our input in the main t_data struct. when the struct arrives here, we first convert
all of the values to their rank in the list, then check the disorder. we then select the right algorithm to use, output the bench if necessary,
free everything and everythings done !*/

int push_swap(t_data *data)
{
    if(rank_and_disorder(data) == 0) //it will return 0 if there's a malloc problem
    {
        free_data(data);
        return(0);
    }
    if(data->disorder == 0) //it will return 1 if there's only 1 number inputed or if all the numbers are alrready sorted (disorder == 0), preventing it from entering the sorting algorithms
    {
        free_data(data); 
        return(1);
    }
    sorting_dispatcher(data); //start the sorting algorithms
    //I still have to put a bench_output option here
    free_data(data); //when we arrive at this step, everything is basically done so let's free everything here to save some space in the main function
    return(2);
}

double check_disorder(int *tab, int size)/*it's the function given in the pdf by 42, just adapted to the C language, we check the disorder by 
dividing the number of pairs that arent good by the total number of pairs*/
{
    int i;
    int j;
    int mistakes;
    int pairs;

    i = 0;
    mistakes = 0;
    pairs = 0;
    if(size < 2)
        return (0.0);
    while(i < size - 1)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab [j])
                mistakes++;
            else
                pairs++;
            j++;
        }
        i++;
    }
    return((double)mistakes / (mistakes + pairs));
}


void sorting_dispatcher(t_data *data) //direct the program to the right sorting algorithm, depending on the disorder or if the user put a flag when lauching push_swap
{
    if(data->adaptive == 0)
    {
        if(data->strategy == 1)
            selection_sort(data);
        if(data->strategy == 2)
            chunk_sort(data);
        if(data->strategy == 3)
            bit_radix(data);
    }
    else
    {
        if(data->disorder < 0.2)
            selection_sort(data);
        if(data->disorder < 0.5 && data->disorder >= 0.2)
            chunk_sort(data);
        if(data->disorder >= 0.5)
            bit_radix(data);
    }
}

/*the purpose of rank_and_disorder is to replace every numbers by its rank in the list and to check the disorder after that.
rank goes from 0 to the amount of numbers inputed -1
ex: if the user outputed "3 43537 -5 0 -37262893", it would replace those value by "3 4 1 2 0"

by doing this we make the medium and complex algorithm WAAAAAAAAAY easier to code and to read + I don't think radix and merge sort would be viable without it

and to do all that we put all of the numbers in an int array. cons are that we have a potential memory allocation error from malloc(+ we have to free the array at the end)
but it's also way easier to write and read the functions that convert the value into rank and the one that checks the disorder*/

int rank_and_disorder(t_data *data)
{
    int *rank;
    t_node *node;
    int i;

    rank = malloc(sizeof(int) * data->a->size);
    if(rank == NULL)
        return(0);
    i = 0;
    node = data->a->top;
    while(i < data->a->size)
    {
        rank[i] = node->value;
        node = node->next;
        i++;
    }
    i = 0;
    while(i < data->a->size)
    {
        node->value = fill_rank(rank, rank[i], data->a->size);
        node = node->next;
        i++;
    }
    data->disorder = check_disorder(rank, data->a->size);
    free(rank);
    return(i);
}

int fill_rank(int *tab, int n, int tab_size)
{
    int i;
    int smaller;

    i = 0;
    smaller = 0;
    while(i < tab_size)
    {
        if(tab[i] < n)
            smaller++;
        i++;
    }
    return(smaller);
}