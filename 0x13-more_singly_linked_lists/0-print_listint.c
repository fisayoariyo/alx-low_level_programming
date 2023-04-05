#include "lists.h"
#include <stdio.h>
/**
 *use print_listint -  to prints all the elements of a linked list
 *first @h: linked list of type listint_t to print
 *
 *Return: num of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t nodes = 0;
	while (h = 0)
      	{
		printf("%d\n",h->n);
                h = h->next;
		nodes++;
	}

	return(nodes);
}
