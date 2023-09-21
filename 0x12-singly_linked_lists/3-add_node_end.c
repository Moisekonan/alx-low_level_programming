#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head
 * @str: the string
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);/*malloc failed*/

		new->str = strdup(str);
		new->len = strlen(str);/*length of str*/
		new->next = NULL;

		if (*head == NULL)
		{
			*head  = new;
			return (*head);
		}
		else
		{
			last = *head;
			while (last->next)
				last = last->next;

			last->next = new;
			return (last);
		}
	}

	return (NULL);
}
