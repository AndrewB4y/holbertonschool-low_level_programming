#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list (see lists.h).
 * @h: linked list to be printed.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		i++;
		printf("[%d]", h->len);
		printf(" %s\n", h->str);
		h = h->next;
	}
	i++;
	printf("[%d]", h->len);
	printf(" %s\n", h->str);

	return (i);
}
