#include "function_pointers.h"
/**
 * print_name - print name
 * @f: funtion pointer
 * @name: name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
