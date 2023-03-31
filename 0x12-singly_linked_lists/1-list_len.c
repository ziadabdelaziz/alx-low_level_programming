#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
