#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: pointer to the start list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int cont = 0;

	if (h)
	{
		while (h != NULL)
		{
			if (h[0].str != NULL)
			{
				printf("[%d] %s\n", h[0].len, h[0].str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
			h = h[0].next;
			cont++;
		}
	}
	return (cont);
}
