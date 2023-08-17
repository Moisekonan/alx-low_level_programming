#include "main.h"

/**
 * _isupper - check if a character is uppercase or lower...
 * @c : caractere to check
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
