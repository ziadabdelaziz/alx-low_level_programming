#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: doubly linked list
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
