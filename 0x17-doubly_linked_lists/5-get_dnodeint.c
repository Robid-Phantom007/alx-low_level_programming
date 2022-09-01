#include "lists.h"

/**
 * get_dnodeint_at_index - To return data of nth node
 * @head: Indicate head of node
 * @index: Indicate index wanted
 *
 * Return: data of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

				return (head);
}
