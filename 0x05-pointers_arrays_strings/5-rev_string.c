#include "holberton.h"
#include <stdio.h>

void rev_string(char *s)
{
	int x,y,z;
	char c;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;	
	}
	z = x / 2;
	x = x -1;

	while (x >= z)
	{
		c = s[y];
		s[y] = s[x];
		s[x] = c;
		x--;
		y++;
	}
}
