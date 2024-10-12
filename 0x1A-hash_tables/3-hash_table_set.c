#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: value identifier
 * @value: value to be stored in table
 * Return: 1 if it succeeded, 0 otherwise
 */
 
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    if (ht == NULL || strlen(key) == 0 || value == NULL || key == NULL)
        return (0);

    if (index >= ht->size)
        return (0);
    if (ht->array[index] == NULL) {
        ht->array[index] = malloc(sizeof(hash_node_t));
        if (ht->array[index] == NULL)
            return (0);
        ht->array[index]->key = NULL;
        ht->array[index]->value = NULL;
        ht->array[index]->next = NULL;
    }

    if (ht->array[index]->key == NULL)
        {
            ht->array[index]->key = malloc(strlen(key) + 1);
            ht->array[index]->value = malloc(strlen(value) + 1);
            if (ht->array[index]->key == NULL || ht->array[index]->value == NULL)
                return (0);

            strcpy (ht->array[index]->key, key);
            strcpy(ht->array[index]->value, value);
            return (1);
        }
    else
        {
            if (strcmp(ht->array[index]->key, key) != 0)
                {
                    strcpy (ht->array[index]->key, key);
                    strcpy(ht->array[index]->value, value);

                }
            else if (strcmp(ht->array[index]->key, key) == 0 || ht->array[index]->value != NULL)
            {
                hash_node_t *newnode = malloc(sizeof(hash_node_t));

                if (newnode == NULL)
                    return (0);

                newnode->key = malloc(strlen(key) + 1);
                newnode->value = malloc(strlen(value) + 1);
                strcpy(newnode->key, key);
                strcpy(newnode->value, value);
                newnode->next = ht->array[index];
                ht->array[index] = newnode;
            }
            else
                strcpy(ht->array[index]->value, value);
        }

        return (1);
}
