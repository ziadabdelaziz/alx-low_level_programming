#include "lists.h"

/**
 * sum_dlistint - return sum
 * @head: doubly linked list
 * Return: sum of values in linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int cnt = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		cnt += head->n;
		head = head->next;
	}

	return (cnt);
}
