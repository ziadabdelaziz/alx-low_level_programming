#include "lists.h"

/**
 * delete_dnodeint_at_index - delte node
 * @head: doubly linked list
 * @index: index of node
 * Return: 1 if scuccess or -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	dlistint_t *prev = NULL;
	unsigned int i = 0;

	if (cur == NULL)
		return (-1);

	while (cur)
	{
		if (i == index)
			break;
		i++;
		prev = cur;
		cur = cur->next;
	}

	if (i != index)
		return (-1);

	if (prev)
		prev->next = cur->next;
	else
		*head = cur->next;

	if (cur->next)
		cur->next->prev = prev;

	free(cur);
	return (1);
}
