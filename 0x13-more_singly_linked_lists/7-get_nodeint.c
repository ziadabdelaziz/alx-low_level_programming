#include "lists.h"

/**
 * get_nodeint_at_index - find node
 * @head: singly linked list
 * @index: index of node
 * Return: node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur;

	if (!head)
		return (NULL);

	cur = head;
	while (cur && index)
	{
		if (index == 0)
			return (cur);
		cur = cur->next;
		index--;
	}

	return (NULL);
}
