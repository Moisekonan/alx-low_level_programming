#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * @charac: the character to be checked
 * Return: 1 if c is a lette else 0
 */
int _isalpha(int charac)
{
	return ((charac >= 'a' && charac <= 'z') || (charac >= 'A' && charac <= 'Z'));
}
