#include <stdio.h>
/**
 * main - call funtion sum
 *
 * Return: 0
 */
int main(void)
{
	funtion_sum();
	return (0);
}

/**
 * funtion_sum - print first 100 numbers
 *
 * Return: void
 */
void funtion_sum(void)
{
	unsigned long a, b, c, result;

	for (result = 0, a = 1, b = 2; a < 4000000;)
	{
		if (!(a % 2))
			result += a;
		c = a;
		a = b;
		b += c;
	}
	printf("%lu\n", result);
}
