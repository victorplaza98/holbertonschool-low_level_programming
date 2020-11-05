#include "lists.h"

/**
 * get_nodeint_at_index - unction that returns the n node of a listint_t
 * @head: Pointed to head of a list
 * @index: index of the node
 * Return: index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	for (count = 0; count <= index; count++)
	{
		if (head == NULL)
			return (NULL);

		node = head;
		head = head->next;
	}
	return (node);
}
