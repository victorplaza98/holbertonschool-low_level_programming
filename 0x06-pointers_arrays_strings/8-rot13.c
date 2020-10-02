#include "holberton.h"
/**
 * rot13 - string using
 * @s: string to encode
 * Return: string
 */
char *rot13(char *s)
{
	char *c;
	char del;

	for (c = s; *c; ++c)
	{
		del = 'A' + (*c & 32);
		if (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z'))
			*c = (*c - del + 13) % 26 + del;
	}

	return (s);
}
