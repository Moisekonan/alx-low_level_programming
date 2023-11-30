#include "hash_tables.h"

/**
 * key_index - gives us the index of a key.
 *
 * @key: an input string
 * @size: the size of hash_table
 * Return: the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
