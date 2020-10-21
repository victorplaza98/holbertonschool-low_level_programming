#include "function_pointers.h"
/**
* print_name - prints a name
* @name: main
* @f: funtion a pointer
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
