#include "lists.h"

/**
 * add_nodeint -adds a node of a linked list
 * @head: double pointer to a lined list
 * @n: string to add to the new node
 * Return: pointer to a new add node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}
