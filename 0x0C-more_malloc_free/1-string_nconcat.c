#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seconds string
 * @n: s2 char number to be used
 * Return: pointer or 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int length1 = 0, length2 = 0, tmp_length = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s1[length2] != '\0')
	{
		length2++;
	}
	if (n >= length2)
		tmp_length = length2;
	else
		tmp_length = length2 - n;

	ptr = malloc(sizeof(char) * (tmp_length + length1 + 1));
	if (ptr == NULL)
		return (NULL);

	while (i < length1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < tmp_length)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
