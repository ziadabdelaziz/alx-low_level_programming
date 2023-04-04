#include "lists.h"

/**
 * add_nodeint_end - add node to rear
 * @head: pointer to singly linked list
 * @n: integer
 * Return: singly linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cur;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	cur = *head;
	if (*head)
	{
		while (cur->next)
			cur = cur->next;

		cur->next = new;
	}
	else
		*head = new;

	return (*head);
}
