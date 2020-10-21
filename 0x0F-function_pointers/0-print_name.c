#include "function_pointers.h"
/**
 * print_name - print name
 * @f: funtion pointer
 * @name: name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
	{
		return;
	}
	(*f)(name);
}
