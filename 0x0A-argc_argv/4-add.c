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
	int count;
	long posit;

	for (count = 1, posit = 0; count < argc; count++)
	{
		if (*argv[count] == 0 || atoi(argv[count]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		posit += atoi(argv[count]);
	}

	printf("%ld\n", posit);
	return (0);
}
