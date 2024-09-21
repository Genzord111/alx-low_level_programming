#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer of the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be added to the new node
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *for_node;
	size_t node_len = 0;
	size_t i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	for_node = *h;
	while (for_node != NULL)
	{
		for_node = for_node->next;
		node_len++;
	}

	if (idx >= node_len)
		return (NULL);

	for_node = *h;
	for (i = 0; i < idx - 1; i++)
	{
		for_node = for_node->next;
	}

	new_node->next = for_node->next;
	new_node->prev = for_node;
	new_node->next->prev = new_node;
	for_node->next = new_node;

	return (*h);
}
