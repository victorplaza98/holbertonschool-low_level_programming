#include "holberton.h"
#include <stdlib.h>
/**
 * _memcpy - copies memory area.
 * @dest: memory area
 * @src: string to overwrite on dest
 * @n: numbers of bytes from memory area
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	return (dest);
}
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr:pointer to the memory
 * @old_size: size, in bytes,
 * @new_size: new size
 * Return: pointer to address reallocate
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *len;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		len = malloc(new_size);
		if (len == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (len);
	}
	len = malloc(new_size);
	if (len == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(len, ptr, old_size);
	free(ptr);
	return (len);
}
