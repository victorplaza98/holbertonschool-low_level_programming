#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to the start of the list
 * Return: length of string
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
