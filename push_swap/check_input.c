#include "push_swap.h"

t_parse *check_input(int argc, char **argv) //check input arguments when launching pushswap
{
    t_parse *input_data; //the struct used to get the numbers in a double char array, the bench flag, the strategy flag and the count of numbers as a struct
    int i;

    i = 1;
    input_data = init_input_data();
    if(input_data == NULL)
        return(NULL);
    while (i < argc && argv[i][0] == '-' && argv[i][1] == '-') // check if argv[i] is a flag because all flags starts with 2 "-"
    {
        if (fill_flag(input_data, argv[i]) == NULL) 
            return (free_parse_struct(input_data)); // in the same step free the input_data struct already malloced and return NULL so push_swap knows there's an error
        i++;
    }
    if (input_data->strategy == 4) /* if there is the adaptive strategy flag, fill flag will put 4 for strategy, to be sure push_swap can't take two strategy flags at once,
    but i wanted to be the same for the adaptive strategy as if the werent any flags to begin with so it resets it to zero after checking the flags as if there were none and 
    fill the adaptive with 1 (usefull for the bench output) */
    {
        input_data->adaptive = 1;
        input_data->strategy = 0;
    }
    if (argc - i == 1) // here we know we only have one arg left
        input_data->numbers = ft_split(argv[i], ' ');
    else
        input_data->numbers = dup_str_array(&argv[i]);
    if (input_data->numbers == NULL)
        return (free_parse_struct(input_data));
    input_data->count = check_count(input_data->numbers);
    return (input_data);
}

t_parse *init_input_data(void) //initialiaze to zero our input parsing struct
{
    t_parse *ret; //ret for return

    ret = malloc(sizeof(t_parse));
    if(ret == NULL)
        return(NULL);
    ret->numbers = NULL;
    ret->strategy = 0;
    ret->bench = 0;
    ret->adaptive = 0;
    ret->count = 0;
    return (ret);
}
int	is_flag(char *flag, char *flag_name) // will return 0 if not the exact name of the flag supposed to be inputed
{
	if (ft_strlen(flag) != ft_strlen(flag_name))
		return (0);
	return (ft_strncmp(flag, flag_name, ft_strlen(flag_name)) == 0);
}

void	*fill_flag(t_parse *data, char *flag) /* check for flags, if another strategy or bench have already been received it will automatically return NULL for the error
to comeback to push_swap. In general for this programm I don't accept two strategy flags or two bench flags */
{
	if (is_flag(flag, "--bench") != 0)
	{
		if (data->bench != 0)
			return (NULL);
		data->bench = 1;
		return (data);
	}
	if (data->strategy != 0)
		return (NULL);
	if (is_flag(flag, "--simple"))
		data->strategy = 1;
	else if (is_flag(flag, "--medium"))
		data->strategy = 2;
	else if (is_flag(flag, "--complex"))
		data->strategy = 3;
	else if (is_flag(flag, "--adaptive"))
		data->strategy = 4;
	else
		return (NULL);
	return (data);
}

char    **dup_str_array(char **src) // duplicate a double array of string, usefull for duplicating the arguments received for numbers and not risking freeing an argv
{
    char    **dst;
    int     count;
    int     i;

    count = 0;
    while (src[count] != NULL)
        count++;
    dst = malloc(sizeof(char *) * (count + 1));
    if (dst == NULL)
        return (NULL);
    i = 0;
    while (i < count)
    {
        dst[i] = ft_strdup(src[i]);
        if (dst[i] == NULL)
            return (free_partial(dst, i));
        i++;
    }
    dst[i] = NULL;
    return (dst);
}

int check_count(char **numbers) // used to check numbers of int to be sorted
{
    int i;

    i = 0;
    while(numbers[i] != NULL)
        i++;
    return(i);
}