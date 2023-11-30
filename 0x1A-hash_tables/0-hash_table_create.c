#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash tables
 *
 * @size: the size of hash table
 * Return: a pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size > 0)
	{
		hash_table_t *new;

		new = malloc(sizeof(hash_table_t));
		if (!new)
			return (NULL);

		new->size = size;
		new->array = malloc(sizeof(hash_node_t));
		if (!new->array)
		{
			free(new);
			return (NULL);
		}

		return (new);
	}

	return (NULL);
}
