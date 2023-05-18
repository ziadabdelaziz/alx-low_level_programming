#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node
 * @head: doubly linked list
 * @index: node's index
 * Return: nth node or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
