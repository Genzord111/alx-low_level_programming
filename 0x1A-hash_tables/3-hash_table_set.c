#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to hash table.
 * @key: The key, cannot be an empty string.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;
	char *dup_key, *dup_value;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	dup_key = strdup(key);
	dup_value = strdup(value);
	if (dup_key == NULL || dup_value == NULL)
	{
		free(dup_key);
		free(dup_value);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
	{
		free(dup_key);
		free(dup_value);
		return (0);
	}

	current_node = ht->array[index];

	if (update_existing_node(current_node, key, dup_value) == 1)
	{
		free(dup_key);
		return (1);
	}

	return (insert(ht, index, dup_key, dup_value));
}

/**
 * update_existing_node - Updates the value of an existing node
 * @node: The current node in the hash table
 * @key: The key for the element
 * @new_value: The new value for the element
 *
 * Return: 1 if the node is updated, 0 otherwise
 */
int update_existing_node(hash_node_t *node, const char *key, char *new_value)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * insert - Inserts a new node into the hash table
 * @ht: The hash table
 * @index: The index to insert the node at
 * @key: The key for the new node
 * @value: The value for the new node
 * Return: 1 if the node is inserted, 0 otherwise
 */
int insert(hash_table_t *ht, unsigned long int index, char *key, char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(key);
		free(value);
		return (0);
	}

	new_node->key = key;
	new_node->value = value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
