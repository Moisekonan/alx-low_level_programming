#include "main.h"

/**
 * print_alphabet_x10 - find the alphabet letters in lowercase x 10
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char charac;

	while (i < 10)
	{
		charac = 'a';
		while (charac <= 'z')
		{
			_putchar(charac);
			charac++;
		}
		i++;
		_putchar('\n');
	}
}
