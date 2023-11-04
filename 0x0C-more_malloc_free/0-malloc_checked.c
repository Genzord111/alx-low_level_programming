#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: parameter indicating size of storage
* Return: address of pointer
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
