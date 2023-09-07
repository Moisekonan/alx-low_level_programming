#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: pointer to realloc
 * @old_size: old size
 * @new_size: new size
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *p = NULL;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size * sizeof(char)));
	else if (new_size > old_size)
	{
		p = malloc(new_size * sizeof(char));
		for (i = 0; i < old_size; i++)
			p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
