#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements
 * @h: Pointd to head list
 * Return: Numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodos = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		printf("%d\n", tmp->n);
		nodos++;
		tmp = tmp->next;
	}
	return (nodos);
}
