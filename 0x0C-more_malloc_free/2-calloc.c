#include <stdlib.h>
#include "main.h"

/**
* _calloc - a function that allocates memory for an array
* @nmemb: number of array elements
* @size: size in bytes of array
* Return: pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *char_ptr;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	char_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}
