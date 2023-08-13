#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Print the last digit of a randomly generated number .
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_Digit = n % 10;

	printf("Last digit of %d is ", n);
	if (last_Digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_Digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

