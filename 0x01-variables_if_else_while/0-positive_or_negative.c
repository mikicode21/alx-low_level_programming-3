<<<<<<< HEAD
        3-print_alphabets.c  8-print_base16.c                                                                                                                                 

	101-print_comb4.c         4-print_alphabt.c    9-print_comb.c 
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there*/
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
>>>>>>> 7283a7e52d104a73ea467ab7c0ecc12a938d807b
