#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array in hash table
 * Return: returns a pointer to a newly created hashtable
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *newtable = malloc(sizeof(hash_table_t));

	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	newtable->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));

	for (i = 0; i < newtable->size; i++)
	{
		newtable->array[0] = NULL;
	}

	return (newtable);
}
