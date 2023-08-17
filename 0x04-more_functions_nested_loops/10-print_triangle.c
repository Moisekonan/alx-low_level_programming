#include "main.h"

/**
 * print_triangle - function that print a triangle
 *
 * @size: size integer
 *
 */

void print_triangle(int size)
{

	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
