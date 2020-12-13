#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in a linked
 * @h: Pointd to head list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodos = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		nodos++;
		tmp = tmp->next;
	}
	return (nodos);
}
