#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function searchesfor value of identifier
 * @ht: hash table
 * @key: key to be searched
 * Return: returns value stored in at that key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	unsigned long int size = ht->size;
	hash_node_t *current;
	char *str = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		current = ht->array[index];
		if (current != NULL)
		{
			while (current != NULL)
			{
				if (strcmp(current->key, key) == 0)
				{
					str = strdup(current->value);
					return (str);
				}
				current = current->next;
			}
		}
		free(current);
	}
	return (str);
}
