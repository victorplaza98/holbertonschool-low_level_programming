#include "lists.h"

/**
 * list_len - finds the number of elements in a linked
 * @h: pointer start the linded list
 * Return: size_t number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 1;

	if (h == NULL)
	{
		return (0);
	}
	i += list_len((h->next));

	return (i);
}
