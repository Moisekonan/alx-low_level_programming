#include <stdio.h>

/**
 * main - enter point
 * Description aphabet inverse
 * Return: Always 0
 */

int main(void)
{
	char let = 'z';

	for (let = 'z'; let >= 'a'; let--)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}

