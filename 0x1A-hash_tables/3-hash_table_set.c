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
    hash_node_t *new_node, *current_node;
    
    if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (0);

    char *dup_key = strdup(key);
    char *dup_value = strdup(value);

    if (dup_key == NULL || dup_value == NULL) {
        free(dup_key);
        free(dup_value);
        return (0);
    }

    current_node = ht->array[index];
    while (current_node != NULL) {
        if (strcmp(current_node->key, key) == 0) {
            free(current_node->value);
            current_node->value = dup_value;
            free(dup_key);
            return (1);
        }
        current_node = current_node->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL) {
        free(dup_key);
        free(dup_value);
        return (0);
    }

    new_node->key = dup_key;
    new_node->value = dup_value;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
