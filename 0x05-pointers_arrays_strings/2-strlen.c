#include "main.h"
#include <stddef.h> // Pour inclure la définition de NULL

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	int length = 0;

	while (s != NULL && s[length] != '\0')
		length++;

	return (length);
}

