#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - funtion that creates array
 * @size: value of lenght
 * @c: char on memory to store
 * Return: return x
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	x = malloc(size * sizeof(char));

	if (x == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(x + i) = c;
	}
	return (x);
}
