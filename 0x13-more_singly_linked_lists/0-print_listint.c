#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints out all the elements of a list
 * @h: the beginning of the list to print from
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
        size_t numbering = 0;

        while (h)
        {
                printf("%i\n", h->n);
                h = h->next;
                numbering++;
        }
        return (numbering);
}
