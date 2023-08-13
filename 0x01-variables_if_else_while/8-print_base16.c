#include <stdio.h>

/**
 * main - enter point
 * Description - return hexadecimal COde
 * Return: Always 0
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
