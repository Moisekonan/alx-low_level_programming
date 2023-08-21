#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int 1
 * @b: pointer to int 2
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

