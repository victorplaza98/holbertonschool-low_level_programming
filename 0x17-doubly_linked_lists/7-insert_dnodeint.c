#include "lists.h"

/**
 * insert_dnodeint_at_index - Write a function that inserts a new node
 * at a given position.
 * @h: double  Pointer with the addres of head of a list
 * @idx: value of the index
 * @n: value of de variable n of the node
 * Return: addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nodo, *temp;
	size_t i = 0;

	new_nodo = malloc(sizeof(dlistint_t));

	if (!new_nodo)
		return (NULL);
	new_nodo->n = n;

	if (*h == NULL)
	{
		new_nodo->prev = NULL;
		new_nodo->next = NULL;
		*h = new_nodo;
		return (new_nodo);
	}

	temp = *h;

	while (i < (idx - 1))
	{
		if (temp == NULL)
		{
			free(new_nodo);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	temp->next->prev = new_nodo;
	new_nodo->next = temp->next;
	temp->next = new_nodo;
	new_nodo->prev = temp;

	return (new_nodo);
}
