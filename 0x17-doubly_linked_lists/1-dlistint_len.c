#include "lists.h"

/**
 * dlistint_len - To count number of nodes
 * @h: Indicate head of node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
