#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - check the negativity or positivity
 * @n : int being evaluated
 * Return: Always 0.
*/
#include "main.h"
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

}
