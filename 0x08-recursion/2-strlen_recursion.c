#include "holberton.h"
/**
 * _strlen_recursion - length a string
 * @s: The string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != 0)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
