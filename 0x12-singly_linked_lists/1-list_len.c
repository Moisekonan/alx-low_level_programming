#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the pointer to struct
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	unsigned int length = 0;

	if (h == NULL)
		return (0);

	for (; h; length++)
	{
		h = h->next;
	}
	return (length);
}
