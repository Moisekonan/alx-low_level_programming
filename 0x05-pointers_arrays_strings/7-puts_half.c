#include "main.h"

/**
 * puts_half - imprime la moitié d'une chaîne de caractères
 * @str: chaîne d'entrée
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	int n = (len + 1) / 2;

	for (int i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

