#include "lists.h"
/**
 *how to print_listint - prints all the elements of a linked list
 first *@h: linked list of type listint_t to print
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n",h->n);
                h = h->next;
		num++;
	}

	return(num);
}
