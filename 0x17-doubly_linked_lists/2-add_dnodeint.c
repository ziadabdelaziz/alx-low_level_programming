#include "lists.h"

/**
 * add_dnodeint - add new node
 * @head: doubly linked list
 * @n: integer
 * Return: address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *cur = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}

	cur->prev = new;
	new->next = cur;
	*head = new;

	return (new);
}
