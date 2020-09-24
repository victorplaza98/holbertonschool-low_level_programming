#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: 0
 */
int main(void)
{
	long  num, num1, a, num2, b, fib_little, num3, c, fib_big, d, i;

	num = 1;
	num2 = 2;
	num3 = num + num2;

	printf("%lu, ", num);
	printf("%lu, ", num2);
	for (d = 3; d < 89; d++)
	{
		printf("%lu, ", num3);
		num = num2;
		num2 = num3;
		num3 = num + num2;
	}
	b = num2 / 1000000000;
	fib_little = num2 % 1000000000;
	c = num3 / 1000000000;
	fib_big = num3 % 1000000000;
	for (i = 89; i < 98; i++)
	{
		printf("%lu%lu, ", c, fib_big);
		num1 = b;
		a = fib_little;
		b = c;
		fib_little = fib_big;
		c = num1 + b + ((a + fib_little) / 1000000000);
		fib_big = (a + fib_little) % 1000000000;
	}
	printf("%lu%lu\n", c, fib_big);
	return (0);
}
