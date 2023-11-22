#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to first
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int elem_removed;

	next = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (0);

	next = *head;

	elem_removed = (*head)->n;

	*head = (next)->next;

	free(next);

	return (elem_removed);
}
