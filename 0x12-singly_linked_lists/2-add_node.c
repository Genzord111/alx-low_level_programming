#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds new node to begining of a linked list
 * @head: pointer to current node
 * @str: string to be duplicated in current node
 * Return: pointer to head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *former;

	former = *head;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = former;

	*head = new_node;
	return (new_node);
}
