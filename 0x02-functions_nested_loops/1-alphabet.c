#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet in ascending order.
 *
 * Description:
 * This function prints all the lowercase letters of the English alphabet in
 * ascending order, starting from 'a' and ending with 'z', followed by a
 * newline character.
 *
 * Return: None
 */

void print_alphabet(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(alpha[i]);
	_putchar('\n');
}
