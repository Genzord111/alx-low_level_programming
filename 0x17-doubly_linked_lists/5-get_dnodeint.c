#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_dnodeint_at_index - returns the number of elements in a linked list
* @head: Pointer to the pointer of the head of the list
* @index: position of node
* Return: returns the element count
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t node_len = 0;
	unsigned int i;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		current = current->next;
		node_len++;
	}

	if (index > node_len)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
