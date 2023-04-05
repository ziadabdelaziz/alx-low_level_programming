#include "lists.h"

/**
 * free_listint2 - free memory
 * @head: pointer to singly linked list
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t *prev;

	prev = NULL;
	cur = *head;

	while (cur)
	{
		cur = cur->next;
		prev = cur;
		free(prev);
	}

	head = NULL;
}
