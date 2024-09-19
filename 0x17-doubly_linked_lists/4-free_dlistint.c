#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint -  frees a listint_t list.
* @head: pointer to start or end of linked list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);

		current = next;
	}
}
