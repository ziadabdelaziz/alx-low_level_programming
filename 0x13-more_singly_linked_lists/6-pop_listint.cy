#include "lists.h"

/**
 * pop_listint - delete first node
 * @head: pointer to singly linked list
 * Return: data of new head node
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	listint_t *first;

	if (!head || !(*head))
		return (0);

	first = *head;
	del = first;
	first = first->next;
	free(del);
	*head = first;

	if (!first)
		return (0);

	return ((*head)->n);
}
