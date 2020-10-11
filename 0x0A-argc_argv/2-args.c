#include "holberton.h"
#include <stdio.h>
/**
 * main - print all arguments
 * @argc: count
 * @argv: array
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
