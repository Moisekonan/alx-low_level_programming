#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - malloc or return 98
 * @b: value to be allowed
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
