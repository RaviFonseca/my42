#include "push_swap.h"

//basically output the message error in case of failed memory allocation or if user didn't input valid numbers

int error_message(void)
{
    write(2, "Error\n", 6);
    return(1);
}
