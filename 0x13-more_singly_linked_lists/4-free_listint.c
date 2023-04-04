#include "lists.h"

/**
 * free_listint - free memory
 * @head: singly linked list
 * Return: None
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
