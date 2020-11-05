#include "lists.h"

/**
 * pop_listint - function that delete the head node
 * @head: Pointed to head of a list
 * Return: deleted head
 */
int pop_listint(listint_t **head)
{
	int n = 0;

	listint_t *new_head;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;

	return (n);
}
