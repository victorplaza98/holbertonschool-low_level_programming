#include "holberton.h"
/**
* _isupper - check for uppercase
* @c: character in ascii
*
* Return: 1 if is upper, 0 if not.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
