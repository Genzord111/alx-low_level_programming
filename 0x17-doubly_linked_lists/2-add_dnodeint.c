#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - adds new node to begining of a linked list
* @head: pointer to current node
* @n: num to be duplicated in current node
* Return: pointer to head
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *former;

	former = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = former;

	*head = new_node;
	return (new_node);
}
