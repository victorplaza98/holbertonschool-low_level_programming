#include "lists.h"

/**
 * free_dlistint - Function that count all the elements
 * of a dlistint_t list
 * @head: double Pointer with the addres of head of  list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
