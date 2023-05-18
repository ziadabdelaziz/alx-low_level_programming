#include "lists.h"


/**
 * print_dlistint - print doubly linked list values
 * @h: doubly linked list
 * Return: length of doubly linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t len = 0;

    while (h)
    {
        printf("%i\n", h->n);
        h = h->next;
        len++;
    }

    return (len);
}
