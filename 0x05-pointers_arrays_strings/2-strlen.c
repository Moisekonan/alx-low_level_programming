#include "main.h"
/**
 * _strlen - return a len of strings
 * @s: an iterable string
 * Return: length of a strings
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


