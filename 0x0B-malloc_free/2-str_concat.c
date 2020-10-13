#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * size_string - length of a string
 * @s: pointer
 * Return: return i or void
 */
int size_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * str_concat - contains the two strings
 * @s1: char one
 * @s2: char two
 * Return: pointer char
 */

char *str_concat(char *s1, char *s2)
{
	char *c, size = 0, size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = size_string(s1);
	size2 = size_string(s2);
	size = size1 + size_string(s2) + 1;
	c = malloc(size * sizeof(char));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(c + i) = *(s1 + i);

	for (i = 0; i <= size2; i++)
		*(c + i + size1) = *(s2 + i);

	return (c);
}
