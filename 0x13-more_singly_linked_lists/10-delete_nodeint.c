#include "lists.h"

/**
 * delete_nodeint_at_index -function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to Pointed to head of a list
 * @index:  index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *node;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		if (!((*head)->next))
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		free(*head);
		*head = (*head)->next;
		return (1);
	}

	node = *head;

	for (count = 0; node && count < index; count++)
	{
		if (count == index - 1)
		{
			if (node->next)
			{
				free(node->next);
				node->next = (node->next)->next;
				return (1);
			}
		}
		node = node->next;
	}
	return (-1);
}
