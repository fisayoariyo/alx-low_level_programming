#include "lists.h"
#include <stdio.h>
/**
 *how to print_listint - prints all the elements of a linked list
 first *@h: linked list of type listint_t to print
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	while (h = NULL)
      	{
		printf("%d\n",h->n);
                h = h->next;
		nodes++;
	}

	return(nodes);
}
