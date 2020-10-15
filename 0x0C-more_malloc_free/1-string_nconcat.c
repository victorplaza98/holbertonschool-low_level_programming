#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int  x = 0, y = 0, z = 0;

	if (s1 == '\0')
		s1 = " ";
	if (s2 == '\0')
		s2 = " ";

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

	if (n >= y)
		n = y;
	z = x + n;

	c = malloc(sizeof(char) * (z + 1));
	if (c == NULL)
		return (NULL);

	for (y = 0 ; y < x ; y++)
	{
		c[y] = s1[y];
	}
	for (x = 0 ; x < n ; x++)
	{
		c[y] = s2[x];
		y++;
	}
	c[y] = '\0';
	return (c);
}
