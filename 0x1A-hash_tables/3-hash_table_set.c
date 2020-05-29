#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to.
 * @key: is the key. @key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *list_n = NULL, *new = NULL;
	int idx = 0;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	list_n = (ht->array)[idx];
	if (list_n != NULL)
	{
		while (list_n != NULL)
		{
			if (strcmp(list_n->key, key) == 0)
			{
				list_n->value = (char *)value;
				return (1);
			}
			list_n = list_n->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = (char *)value;
	new->key = (char *)key;
	new->next = (ht->array)[idx];
	(ht->array)[idx] = new;
	return (1);
}
