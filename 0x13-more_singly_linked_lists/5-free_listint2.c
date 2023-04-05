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

	if (head)
	{
		cur = *head;
		while (cur)
		{
			prev = cur;
			cur = cur->next;
			free(prev);
		}
		*head = NULL;
	}
}
