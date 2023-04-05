#include "lists.h"
#include <stdio.h>
/**
 *print_listint to  print list
 *return -size_t
 *then @h: the list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = h;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (h);
}
