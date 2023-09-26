#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function returned the number of elements in a linked listint_t
 * @h: the list of nodes
 * Return: the number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
