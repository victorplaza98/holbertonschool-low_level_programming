#include "holberton.h"
/**
 * _strstr - Funtion
 * @haystack: Frist tring
 * @needle: string
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z;
	int size;

	for (size = 0; needle[size]; size++)
		;

	for (y = 0; haystack[y]; y++)
	{
		z = 0;

		for (x = 0; needle[x]; x++)
		{
			if (haystack[y + x] == needle[x] && haystack[y + x] != '\0')
				z++;
			else
			{
				z = 0;
				break;
			}
		}
		if (z == size)
			return (&haystack[y]);
	}
	return (0);
}
