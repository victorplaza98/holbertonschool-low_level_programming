#include "holberton.h"
/**
 * leet - encode a string 1337
 * @s: string
 * k: characters
 *  Return: s String
 */
char *leet(char *s)
{
	char *x;
	char arr[15] = {
		'a', 'A', '4',
		'e', 'E', '3',
		'o', 'O', '0',
		't', 'T', '7',
		'l', 'L', '1'
	};
	int i;

	for (x = s; *x; ++x)
	{
		for (i = 0; i < 15; i += 3)
		{
			if (*x == arr[i] || *x == arr[i + 1])
				*x = arr[i + 2];
		}
	}

	return (s);
}
