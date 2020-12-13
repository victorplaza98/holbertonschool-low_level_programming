#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: double  pointer to the beginning of the linked list
 * @n: value of the n
 * Return: addres of the new node of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo;

	if (head == NULL)
		return (NULL);

	new_nodo = malloc(sizeof(dlistint_t));
	if (new_nodo == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->prev = NULL;
	new_nodo->next = *head;
	*head = new_nodo;
	if (new_nodo->next != NULL)
		(new_nodo->next)->prev = new_nodo;
	return (new_nodo);
}
