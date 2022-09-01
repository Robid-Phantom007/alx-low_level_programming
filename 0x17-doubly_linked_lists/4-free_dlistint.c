#include "lists.h"

/**
 * free_dlistint - To free list
 * @head: Indicate head of node
 *
 * Return: free'd list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
