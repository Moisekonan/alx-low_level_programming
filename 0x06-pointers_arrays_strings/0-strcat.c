#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: final string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *final = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (final);
}

