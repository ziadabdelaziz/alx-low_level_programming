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

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	cur->prev = new;
	new->next = cur;
	new->prev = NULL;

	return (new);
}
