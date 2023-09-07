#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * error - prints error
 * @status: the status code
 * Return: None
 */
void error(int status)
{
	char str[] = "Error";
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	exit(status);
}

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char **argv)
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		error(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				error(98);
			}
		}

	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	_putchar('\n');
	return (0);
}
