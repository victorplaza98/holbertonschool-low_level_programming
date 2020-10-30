#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: pointer to the start list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int nodes = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		nodes++;
		if (tmp->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		} else
		{
			printf("[%d] ", tmp->len);
			printf("%s\n", tmp->str);
		}
		tmp = tmp->next;
	}

	return (nodes);
}
