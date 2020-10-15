#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  function that allocates memory
 * @b: int
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
