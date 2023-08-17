#include "main.h"

/**
 * print_numbers - print first 10 digits
 * Return: 0 through 9
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
