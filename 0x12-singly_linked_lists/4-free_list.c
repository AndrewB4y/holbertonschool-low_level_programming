#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first element en the singly linked list_t list.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *node;

	node = head;

	while (head->next != NULL)
	{
		node->next = head->next;
		free(head->str);
		free(head);
		head = node->next;
	}

	free(head->str);
	free(head);
}
