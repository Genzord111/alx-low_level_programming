#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * test_add_dnodeint - Test function for add_dnodeint
 */
void test_add_dnodeint(void)
{
    dlistint_t *head = NULL;
    dlistint_t *new_node;

    /* Test 1: Add to empty list */
    new_node = add_dnodeint(&head, 10);
    if (new_node == NULL || new_node->n != 10 || new_node->prev != NULL || new_node->next != NULL || head != new_node)
    {
        printf("Test 1 Failed: Adding to empty list\n");
        return;
    }

    /* Test 2: Add to non-empty list */
    new_node = add_dnodeint(&head, 20);
    if (new_node == NULL || new_node->n != 20 || new_node->prev != NULL || new_node->next != head || head != new_node)
    {
        printf("Test 2 Failed: Adding to non-empty list\n");
        return;
    }

    /* Test 3: Check if previous node is updated */
    if (head->next->prev != head)
    {
        printf("Test 3 Failed: Previous node not updated correctly\n");
        return;
    }

    /* Test 4: Add multiple nodes */
    add_dnodeint(&head, 30);
    add_dnodeint(&head, 40);
    if (head->n != 40 || head->next->n != 30 || head->next->next->n != 20 || head->next->next->next->n != 10)
    {
        printf("Test 4 Failed: Multiple nodes not added correctly\n");
        return;
    }

    /* Test 5: Check if NULL head is handled */
    new_node = add_dnodeint(NULL, 50);
    if (new_node != NULL)
    {
        printf("Test 5 Failed: NULL head not handled correctly\n");
        return;
    }

    printf("All tests passed successfully!\n");

    /* Free the list */
    while (head != NULL)
    {
        dlistint_t *temp = head;
        head = head->next;
        free(temp);
    }
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    test_add_dnodeint();
    return (EXIT_SUCCESS);
}
