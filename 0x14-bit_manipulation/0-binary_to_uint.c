#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: converted
 */
unsigned int binary_to_uint(const char *b)
{
	int count, inter;
	unsigned int num;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);

	count = 0;
	while (b[count] != '\0')
		count++;

	num = inter = 0;
	count--;
	while (count >= 0)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		num += (b[count] - 48) * (1 << inter);
		count--, inter++;
	}
	return (num);
}
