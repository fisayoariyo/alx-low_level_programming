#include "lists.h"
#include <stdio.h>
/**
 *print_listint to  print list
 *return -size_t
 *then @h: the list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
       		h = h->next;
		printf("%d", h->n);
		printf("\n");
		nodes++;
	}
	return (nodes);
}
