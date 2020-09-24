#include <stdio.h>
/**
 * main - prime factor
 * Description: prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long i, num;

	num = 612852475143;

	for (i = 3; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%lu\n", i);
	return (0);
}
