#include "holberton.h"
/**
 * _strncat - string with n bytes
 * @dest: String
 * @src: String 2
 * @n: number of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (n < j)
		j = n - 1;
	for (k = 0; k <= j; k++, i++)
		dest[i] = src[k];
	dest[i + 1] = '\0';
	return (dest);
}
