#include "lists.h"

/**
 * free_list - free linked list
 * @head: singly linked list
 * Return: None
 */
 void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
