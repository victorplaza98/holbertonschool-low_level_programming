#include <stdio.h>
/**
 * main - print firts 100 numbers
 *
 * Return: 0
 */
int main(void)
{
	long num = 0, num1 = 0, num2 = 1, result = 0;

	while (num < 4000000)
	{
		if (num % 2 == 0)
			result += num;
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}
	printf("%lu\n", result);
	return (0);
}
