#include "holberton.h"

/**
 * _memset - bytes
 * @s: address
 * @b: value to set on memory
 * @n: number of bytes to pointer by S
 * Return: char S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
