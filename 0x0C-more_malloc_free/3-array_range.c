#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - generate an array
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int total_numbers = 0, i = 0;

	if (min > max)
		return (NULL);

	total_numbers = max - min + 1;
	ptr = malloc(sizeof(int) * total_numbers);
	if (ptr == NULL)
		return (NULL);

	for (; (i + min) <= max; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
