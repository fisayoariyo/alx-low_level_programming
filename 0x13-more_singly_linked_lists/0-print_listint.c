#include "lists.h"
#include <stdio.h>
/**
 *print_listint - to  print list
 *
 *@h: the list
 *Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
