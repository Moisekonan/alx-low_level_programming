#include "main.h"


/**
 * _memcpy - function that copies a buffer from src to dest
 * @dest : the destination
 * @src : the source
 * @n: the int n
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
