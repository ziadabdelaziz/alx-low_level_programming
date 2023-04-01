#include "lists.h"

/**
 * add_node - add node
 * @head: singly linked list
 * @str: string
 * Return: new node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (*head);
}
