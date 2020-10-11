#include "holberton.h"
#include <stdio.h>
/**
* main - prints the number arguments passed into
* @argc: count
* @argv: array
* Return: void
*/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
