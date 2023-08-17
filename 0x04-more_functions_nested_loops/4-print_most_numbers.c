#include "main.h"

/**
 * print_most_numbers - print first 10 digits
 * Return: 0 through 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
