#include "lists.h"

/**
 * sum_listint - Function that returns the sum
 * @head: Pointed to head of a list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	sum = head->n + sum_listint(head->next);

	return (sum);
}
