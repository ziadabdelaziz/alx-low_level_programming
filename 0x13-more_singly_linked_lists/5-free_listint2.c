#include "lists.h"

/**
 * free_listint2 - free memory
 * @head: pointer to singly linked list
 * Return: None
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	head = NULL;
}
