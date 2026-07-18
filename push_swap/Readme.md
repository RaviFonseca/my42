# How my push_swap works:

__Step 1:__ A parse struct is made, we’ll fill it with all of the input given as parameter.
* -we check the arguments for flags
* -once we got rid of the flags:
    * —if there’s only one argument left (every number are on one string only), we ft_split it to a double array of char.
    * —else we ft_strdup all of the last arguments into a double array of char
* -lastly we return the parsing struct to the main function.

__Step 2:__ we check if the user didn’t just inputed flags and no numbers

__Step 3:__ We create a main struct, we’ll fill it with the data included in the parsing struct.
* -we initialize everything to zero
* -we create the two stacks and initialize b to zero
* -we fill stack a with the numbers included on the double char array of the parse struct. While doing that we make sure every single number are valid
* -we copy the flags from the parsing struct to the main struct.
* -we free the parsing struct and return the main struct

__Step 4:__ We convert all of the numbers in stack a to their rank

__Step 5:__ We check the disorder, if it’s equal to zero (everything sorted or just one number) it goes back to the main functions and quit the program

__Step 6:__ push_swap select the right algorithm based on the disorder or the flags if there’s any

__Step 7:__ everything get’s sorted, the operations are written live as the algorithm is sorting the numbers.

__Step 8:__ if necessary bench is outputed (still not finished)

__Step 9:__ the main structure get’s freed, and the program returns 0.

## Error cases:

### Push_swap returns 1 and output « error\n » in stderr if:
1. there is a malloc allocation failure
2. there is more than 1 strategy flag
3. there is more than 1 bench flag
4. anything else then an int is inputed for the numbers(words, underflows, overflows, etc…
5. there is two times the same number

### Push_swap just returns 0 if:
1. there’s no argument given when laughing the program
2. there’s only one number inputed
3. there’s flags but no numbers inputed
4. all numbers are already sorted

## Performance right now:

Checker is good with every algorithms and every amount of numbers. Complex algorithm uses +/- 6700 operations and medium one +/- 8500, so both are enough but medium could be optimized to go under 8000 for good performance mark.

I’m not sure it’s worth it to try to go under 5500 for excellent mark due to the amount of work and complexity it would bring to the code.

My objective until now was mainly to have the simplest possible code (only medium uses more than 5 functions).

## Not done yet list:

1. link output_bench to the program
2. optimize medium algorithm
3. makefile
4. norminette
5. readme