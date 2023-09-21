#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to a pointer
 * @str: str needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int length = 0;

	if (head == NULL)
		return (0);

	length = strlen(str);/* get length of str*/

	new = malloc(sizeof(list_t));
	if (new == NULL) /*malloc failed*/
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
