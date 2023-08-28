#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s : pointer to memory area
 * @b : the constant byte b
 * @n : nomber of byte to fill
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
