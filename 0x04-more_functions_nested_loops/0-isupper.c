#include "holberton.h"
/**
 * _isupper - Check for uppercase character.
 * @c: Charater to check
 * Return: 1 is upper, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
