#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 -  frees a listint_t list and sets head to NULL
* @head: pointer to start or end of linked list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);

		current = next;
	}

	*head = NULL;
}
