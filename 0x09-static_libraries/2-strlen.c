#include "holberton.h"
/**
 * _strlen - swaps two values
 * @s: String
 * Return: 1 success
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
