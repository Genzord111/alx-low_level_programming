#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: pointer to head
* Return: returns the element count
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
