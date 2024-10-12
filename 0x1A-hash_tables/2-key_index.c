#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index -  gives you the index of a key
 * @key: key for the data value.
 * @size: size of array
 * Return: returns the index where the key is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	return index;
}
