#include <stdio.h>


/**
 * factor_prime - prints the prime factors of a number
 * @n: number
 */

void factor_prime(long n)
{
	long i;

	for (i  = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);
}

/**
 * main - principal func
 * Return: 0
 */
int main(void)
{
	factor_prime(612852475143);
	return (0);
}
