#include "lists.h"

/**
 * add_node_end - add node
 * @head: singly linked list
 * @str: string
 * Return: linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
