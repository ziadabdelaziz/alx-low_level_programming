#include "lists.h"

/**
 * dlistint_len - get lenght of doubly linked list
 * @h: doubly linked list
 * Return: lenght of doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}