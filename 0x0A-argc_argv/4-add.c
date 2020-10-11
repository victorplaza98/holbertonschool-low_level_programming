#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print positive numbers
 * @argc: count
 * @argv: array
 * Return: void
 */
int main(int argc, char *argv[])
{
	int num, posit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (posit = 0; argv[num][posit]; posit++)
		{
			if (argv[num][posit] < '0' || argv[num][posit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
