#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string dupplication
 * Return: return string duplicated
 */
char *_strdup(char *str)
{
	int a;
	int b;
	char *c;

	if (str == 0)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	c = malloc(sizeof(char) * (a + 1));
	if (c == 0)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
	{
		c[b] = str[b];
	}
	c[b] = '\0';
	return (c);
}
