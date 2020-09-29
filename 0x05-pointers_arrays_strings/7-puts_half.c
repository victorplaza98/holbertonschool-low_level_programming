nclude "holberton.h"
/**
 * puts_half - Second half of a string
 * @str: string to print half
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, n;

	i = n = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
		i /= 2;
	else
	{
		n = (i - 1) / 2;
		i -= n;
	}
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
