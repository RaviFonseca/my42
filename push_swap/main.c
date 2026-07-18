#include "push_swap.h"

int main(int argc, char **argv)
{
    t_parse *initial_input;
    t_data *data;
    int check;

    if (argc == 1)
        return (0);
    initial_input = check_input(argc, argv); //first input check
    if (initial_input == NULL)
        return(error_message());
    if (initial_input->count == 0) //check if there's enough output (if no numbers have been inputed it will just return 0 as it's asked by 42)
	{
		free_parse_struct(initial_input);
		return (0);
	}
    data = init_data(initial_input); //convert the input data to the main struct we'll use for the rest of the program
    if(data == NULL)
        return(error_message());
    check = push_swap(data); 
    if(check == 0)
        return(error_message());
    return(0);
}
