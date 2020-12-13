#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns
 * the nth node of a dlistint_t linked list.
 * @head: double  Pointer with the addres of head of a list
 * @index: value of the index
 * Return: addres of the new node of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
