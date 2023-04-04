#include "lists.h"

/**
 * print_listint - print all elements of list
 * @h: singly linked list
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
    size_t cnt;

    cnt = 0;
    for (; h != NULL; h = h->next)
    {
        printf("%d\n", h->n);
        cnt++;
    }

    return (cnt);
}
