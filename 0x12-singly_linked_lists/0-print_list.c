#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h:  the pointer to the node
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int length = 0;

	if (h == NULL)
		return (0);

	for (; h; length++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (length);
}
