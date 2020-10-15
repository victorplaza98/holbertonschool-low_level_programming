#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *@s1: string
 *@s2: string
 *@n: is greater or equal to the length of s2 then use the entire string s2
 *Return: the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z, i;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		;
	}
	if (n >= y)
	{
		n = y;
	}
	c = malloc(sizeof(*c) * (x + n + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		c[z] = s1[z];
	}
	for (i = 0; i < n; i++)
	{
		c[x + i] = s2[i];
	}
	c[x + i] = '\0';
	return (c);
}
