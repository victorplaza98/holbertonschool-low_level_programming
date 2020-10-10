#include "holberton.h"
/**
 * _strchr - locates charecter in string
 * @s: string to search
 * @c: char
 * Return: char s
 */
char *_strchr(char *s, char c)
{
	int size = 0, i = 0;
	char *f;

	while (s[i])
		i++;

	if (i > 0)
	{
		for (size = 0; size <= i;)
		{
			if (c == s[size])
			{
				f = s + size;
				break;
			}
			f = 0;
			size++;
		}
	} else
		f = 0;
	return (f);
}
