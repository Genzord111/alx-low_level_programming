#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - returns the aum of the number of int data in all nodes
* @head: pointer to head
* Return: returns the sum of total int data
*/

int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (1)
	{
		result += current->n;

		if (current->next == NULL)
			break;

		current = current->next;
	}

	return (result);
}
