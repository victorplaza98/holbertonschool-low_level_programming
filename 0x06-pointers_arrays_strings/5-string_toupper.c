#include "holberton.h"
/**
 * string_toupper - lowercase letters of uppercase
 * @s: sting the change
 * Return: string *s
 */
char *string_toupper(char *s)
{
	char *i;

	for (i = s; *i; ++i)
	{
		if ('a' <= *i && *i <= 'z')
			*i -= 'a' - 'A';
	}

	return (s);
}
