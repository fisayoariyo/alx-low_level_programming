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
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
