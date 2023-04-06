#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at idx
 * @head: singly linked list
 * @idx: index
 * @n: node data
 * Return: address of new node or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *cur;
	listint_t *prev;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	cur = *head;
	if (!cur && idx == 0)
	{
		*head = new;
		return (new);
	}
	else if (idx == 0)
	{
		new->next = cur;
		*head = new;
		return (new);
	}

	prev = NULL;
	while (cur)
	{
		if (idx == 0)
		{
			prev->next = new;
			new->next = cur;
			return (new);
		}
		prev = cur;
		cur = cur->next;
		idx--;
	}

	return (NULL);
}
