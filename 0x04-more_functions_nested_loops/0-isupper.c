#include "holberton.h"
/**
 *_isupper - check for uppercase
 * @c: character
 * Return: 1 if is upper, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
