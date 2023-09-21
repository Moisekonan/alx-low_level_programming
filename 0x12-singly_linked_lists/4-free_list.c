#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new;

	while ((new = head))
	{
		head = head->next;
		free(new->str);
		free(new);
	}
}
