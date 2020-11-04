#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head list
 * @idx: index of the node
 * @n: value of node
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node, *next_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node || (!(*head) && idx > 0))
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	next_node = *head;

	for (count = 0; next_node && count < idx ; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = next_node->next;
			next_node->next = new_node;
			return (new_node);
		}
		next_node = next_node->next;
	}
	free(new_node);
	return (NULL);
}
