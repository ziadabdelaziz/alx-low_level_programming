#include "lists.h"


/**
 * reverse_listint - reverse linked list
 * @head: singly linked list
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	prev = NULL;
	next = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
