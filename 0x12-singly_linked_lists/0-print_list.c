#include "lists.h"

/**
* print_list - print list strings
* @h: pointer to first element of list of nodes
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h)
	{
		cnt++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;
	}

	return (cnt);
}
