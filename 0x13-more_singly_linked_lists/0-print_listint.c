#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h:the list of nodes
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (length);
}
