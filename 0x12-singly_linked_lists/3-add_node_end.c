#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: first element on the list_t list.
 * @str: string to add on the new element's str field.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	node = *head;

	/*getting the len of str*/
	while (str[len] != '\0')
		len++;

	len--;

	/*if first element (head) is NULL*/
	if (node == NULL)
	{
		*head = new;
		new->str = strdup(str);
		new->len = len;
		new->next = NULL;

		return (new);
	}

	/*finding last node element in list*/
	while (node->next != NULL)
	{
		node = node->next;
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	node->next = new;

	return (new);
}
