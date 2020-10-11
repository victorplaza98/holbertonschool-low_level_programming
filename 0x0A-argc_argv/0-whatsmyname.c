#include "holberton.h"
#include <stdio.h>
/**
 * main - prints name
 * @argc: count
 * @argv: array
 * Return: void
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	printf("\n");
	}
	return (0);
}
