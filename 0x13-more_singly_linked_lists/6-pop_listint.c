#include "lists.h"

/**
 * pop_listint - delete first node
 * @head: pointer to singly linked list
 * Return: data of new head node
 */
int pop_listint(listint_t **head)
{
	listint_t *first;

	if (!head)
		return (0);

	first = *head;
	*head = (*head)->next;
	free(first);

	if (!*head)
		return (0);

	return ((*head)->n);
}
