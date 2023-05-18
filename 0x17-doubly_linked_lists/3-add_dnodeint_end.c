#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: doubly linked list
 * @n: integer value
 * Return: address of new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (cur == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (cur->next)
		cur = cur->next;

	cur->next = new;
	new->prev = cur;

	return (new);
}
