#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: poiter to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned long int size = ht->size;
	int first_data = 1;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (first_data != 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_data = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
