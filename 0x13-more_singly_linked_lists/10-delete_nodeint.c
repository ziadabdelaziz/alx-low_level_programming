#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at idx
 * @head: singly linked list
 * @idx: index
 * Return: 1 if success -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur;
	listint_t *prev;

	if (!head)
		return (-1);

	prev = NULL;
	cur = *head;

	if (!cur)
		return (-1);

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	while(cur)
	{
		if (index == 0)
		{
			prev->next = cur->next;
			free(cur);
			return (1);
		}
		prev = cur;
		cur = cur->next;
		index--;
	}

	return (-1);
}
