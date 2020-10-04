#include "holberton.h"
/**
 * _memcpy - memory area
 * @dest: memory area
 * @src: string to overwrite
 * @n: numbers of bytes
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
