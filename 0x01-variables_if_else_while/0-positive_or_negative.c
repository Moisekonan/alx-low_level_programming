#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enter point
 *
 * Description : "Checks foor number if it  is positive or negative"
 * Return:always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
