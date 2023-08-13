#include <stdio.h>

/**
 * main - enter point
 * Description print 0123456789
 * Return: Always 0
 */

int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
