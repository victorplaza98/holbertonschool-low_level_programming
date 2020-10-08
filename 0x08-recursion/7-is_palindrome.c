#include "holberton.h"
/**
 * pal_recursion - length of a string
 * @s: String
 * Return: length
 */
int pal_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != 0)
	{
		i++;
		return (i + pal_recursion(s + 1));
	}
	return (i);
}

/**
 * is_pal_check - check for palindrome
 * @s: String check
 * @i: length string
 * Return: 1 if palindrome, 0 if not
 */
int is_pal_check(char *s, int i)
{
	if (i <= 1)
		return (1);
	if (*s != s[i - 1])
		return (0);
	else
		return (is_pal_check((s + 1), (i - 2)));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String
 * Return: 1 is palindrome or 0 not is palindrome
 */
int is_palindrome(char *s)
{
	int i;

	i = pal_recursion(s);
	if (i <= 1)
		return (1);
	return (is_pal_check(s, i));
}
