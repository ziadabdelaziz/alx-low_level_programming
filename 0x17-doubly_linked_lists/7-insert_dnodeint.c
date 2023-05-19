#include "lists.h"

/**
 * insert_dnodeint_at_index - add node
 * at a specific position
 * @h: doubly linked list
 * @idx: indes to insert in
 * @n: integer value
 * Return: new node or NULL if fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h;
	dlistint_t *prev = NULL;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	while (cur)
	{
		if (i == idx)
			break;
		i++;
		prev = cur;
		cur = cur->next;
	}

	if (i != idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = cur;
	new->prev = prev;
	if (cur)
		cur->prev = new;
	if (prev)
		prev->next = new;

	return (new);
}
