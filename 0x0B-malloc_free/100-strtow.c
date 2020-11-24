#include "holberton.h"
/**
 * countnum - counts the number of words in a string
 * @s: string to count
 * Return: int of number of words
 */
int countnum(char *s)
{
	int a, n = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				n++;
		}
		else if (a == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int a, b, c, d, n = 0, pos = 0;
	char **len;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = countnum(str);
	if (n == 1)
		return (NULL);
	len = (char **)malloc(n * sizeof(char *));
	if (len == NULL)
		return (NULL);
	len[n - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			len[pos] = (char *)malloc(b * sizeof(char));
			b--;
			if (len[pos] == NULL)
			{
				for (c = 0; c < pos; c++)
					free(len[c]);
				free(len[n - 1]);
				free(len);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				len[pos][d] = str[a + d];
			len[pos][d] = '\0';
			pos++;
			a += b;
		}
		else
			a++;
	}
	return (len);
}
