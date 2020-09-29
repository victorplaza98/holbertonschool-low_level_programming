nclude "holberton.h"
/**
 * puts_half - Second half of a string
 * @str: string to print half
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
		j = j + 1;
	}
	i = i - 1;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
