#include "lists.h"
/**
 * print_list - print list strings
 * @h: singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
