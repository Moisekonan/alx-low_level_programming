#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, l;

	j = 1;
	k = 2;
	while (i < 50)
	{
		if (j == 20365011074)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		l = j + k;
		j = k;
		k = l;
		i++;
	}

	return (0);
}
