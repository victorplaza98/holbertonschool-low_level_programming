#include "holberton.h"
/**
 * cap_string - words in a string
 * @s: the string
 * Return: string
 */
char *cap_string(char *s)
{
	char *k = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0, j = 0; s[i]; ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; k[j] && k[j] != s[i - 1]; ++j)
					;
			}

			if (k[j])
				s[i] -= ('a' - 'A');
		}
	}

	return (s);
}
