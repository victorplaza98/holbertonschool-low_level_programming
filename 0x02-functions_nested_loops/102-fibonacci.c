#include <stdio.h>
/**
 * main - 102-fibonacci.c
 *
 * Return: 0
 */
int main(void)
{
	int num;
	unsigned long a = 0, b = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
