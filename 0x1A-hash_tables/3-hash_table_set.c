#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to hash table.
 * @key: The key, cannot be an empty string.
 * @value: The value associated with the key.
 * 
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current_node;
    
    // Check for NULL inputs
    if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
        return (0);

    // Get index
    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (0);

    // Duplicate key and value
    char *dup_key = strdup(key);
    char *dup_value = strdup(value);

    if (dup_key == NULL || dup_value == NULL) {
        free(dup_key); // Clean up in case one fails
        free(dup_value);
        return (0);
    }

    // Check if this index already has nodes (collision handling)
    current_node = ht->array[index];
    while (current_node != NULL) {
        if (strcmp(current_node->key, key) == 0) {
            // Key exists, update value
            free(current_node->value);  // Free old value
            current_node->value = dup_value;
            free(dup_key); // Since key already exists, no need to store the duplicated key
            return (1);
        }
        current_node = current_node->next;
    }

    // If key is not found, create a new node and add it to the beginning
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL) {
        free(dup_key);
        free(dup_value);
        return (0);
    }

    // Set the new node's key and value
    new_node->key = dup_key;
    new_node->value = dup_value;
    new_node->next = ht->array[index]; // Collision handling: Add to beginning
    ht->array[index] = new_node;       // Set new node as the head of the list

    return (1);
}
