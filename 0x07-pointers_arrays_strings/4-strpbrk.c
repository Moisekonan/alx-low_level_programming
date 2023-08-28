#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function strpbrk
 * @s: the pointer to string
 * @accept: the pointer to string too
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
