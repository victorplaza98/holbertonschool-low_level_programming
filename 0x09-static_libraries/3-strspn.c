#include "holberton.h"
/**
 * _strspn - funtion
 * @s: frist string
 * @accept: second string
 * Return: insigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (!accept[y])
			break;
	}
	return (x);
}
