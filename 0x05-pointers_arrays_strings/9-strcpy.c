#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - given string
 * @dest: array
 * @src: size of array
 * Return: 1
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
