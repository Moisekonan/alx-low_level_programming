#include "main.h"
/**
 * print_line - check if c is digit
 * @n: the number of line
 * Return: n straigh
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
