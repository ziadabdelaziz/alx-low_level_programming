#include "lists.h"

/**
 * sum_listint - sum all data
 * @head: singly linked list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int cnt;

	if (!head)
		return (0);

	while (head)
	{
		cnt += head->n;
		head = head->next;
	}

	return (cnt);
}
