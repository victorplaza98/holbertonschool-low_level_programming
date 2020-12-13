#include "lists.h"

/**
 * sum_dlistint - Write a function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: Pointed to head of a list
 * Return: The number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodo = head;
	int sum = 0;

	if (head != NULL)
	{
		while (nodo != NULL)
		{
			sum += nodo->n;
			nodo = nodo->next;
		}
	}
	return (sum);
}
