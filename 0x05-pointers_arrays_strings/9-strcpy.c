#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - string
 * @dest: array
 * @src: size of array
 * Return: 1
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\n')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = *(src + j);
	}
	return (dest);
}
