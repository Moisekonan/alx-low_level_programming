#include <stdio.h>

/**
 * main - enter point
 * Description - print numbers
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');

	return (0);
}
