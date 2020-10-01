#include "holberton.h"
/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
