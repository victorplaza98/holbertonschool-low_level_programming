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
	int posit;
	int count;
	int i;

	count = 1;
	posit = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		posit += atoi(argv[count]);
		count++;
	}
	printf("%d\n", posit);

	return (0);
}
