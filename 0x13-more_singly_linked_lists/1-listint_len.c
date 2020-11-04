#include "lists.h"

/**
 * listint_len - Function that return the number of elements of list.
 * @h: struture of a list
 * Return: number od nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 1;

	if (h == NULL)
		return (0);
	
	node += listint_len(h->next);
	return (node);
}