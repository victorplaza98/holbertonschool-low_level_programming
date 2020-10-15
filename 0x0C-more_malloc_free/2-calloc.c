#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - function that allocates memory for an array
* @nmemb :  array for allocate memory
* @size : size of bytes
* Return: 1 NULL -- else if b
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(sizeof(char) * (nmemb * size));

	if (c == '\0')
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		c[i] = 0;
	}
	return (c);
}
