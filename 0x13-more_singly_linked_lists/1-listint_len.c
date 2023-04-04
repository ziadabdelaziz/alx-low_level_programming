#include "lists.h"

/**
 * listint_len - number of elements in list
 * @h: singly linked list
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;

	cnt = 0;
	for (; h != NULL; h = h->next)
		cnt++;

	return (cnt);
}
