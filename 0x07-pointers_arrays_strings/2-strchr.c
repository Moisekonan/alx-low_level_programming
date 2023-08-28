#include "main.h"

/**
 * _strchr - function that return the pointer to m c
 * @s: the string
 * @c: charactere to found
 * Return: pointer to first match character
 */
char *_strchr(char *s, char c)
{
	int length = 0;
	int i = 0;

	while (s[length])
	{
		length++;
	}

	while (i <= length)
	{
		if (c == s[i])
		{
			s += i;

			return (s);
	}
	i++;

	}

	return ('\0');
}
