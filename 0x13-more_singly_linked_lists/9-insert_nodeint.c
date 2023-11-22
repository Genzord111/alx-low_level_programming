#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to pointer to first node
 * @idx: index of node to be added
 * @n: integer for newly created node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *first;
	listint_t *new_node;
	listint_t *former;

	first = *head;

	for (i = 1; i < idx; i++)
	{
		*head = (*head)->next;
	}

	former = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = former->next;
	former->next = new_node;
	*head = first;

	return (*head);
}
