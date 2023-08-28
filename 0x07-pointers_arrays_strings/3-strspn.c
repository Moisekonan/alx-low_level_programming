#include "main.h"

/**
 * _strspn - search a match string
 * @s: a pointer to string
 * @accept: a pointer to searched string
 * Return: a number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				bytes++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (bytes);
}
