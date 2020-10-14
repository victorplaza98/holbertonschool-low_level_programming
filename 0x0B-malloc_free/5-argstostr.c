#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Funtion that concatenates all the arguments of your program
 * @ac: ac
 * @av: av
 * Return: return c
 */
char *argstostr(int ac, char **av)
{
	int i, y, z = 0, a = 0;
	char *c;

	if (ac < 1 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (y = 0; av[i][y]; y++)
			a++;
	a += ac + 1;
	c = malloc(sizeof(char) * a);
	if (!c)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
			c[z++] = av[i][y];
		c[z++] = '\n';
	}
	c[z] = '\0';
	return (c);
}
