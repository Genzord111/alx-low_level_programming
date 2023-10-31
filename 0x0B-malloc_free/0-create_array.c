#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* create_array - creates a char array of a cetain size
* @size: size of array
* @c: character to be stored in each index
* Return: pointer to buffer
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
