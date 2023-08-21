#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * fcounter is to first count to end, n is to count back
 * @s: string to reverse
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
