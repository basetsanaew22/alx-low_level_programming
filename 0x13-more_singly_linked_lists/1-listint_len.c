#include "lists.h"

/**
 * listint_len _ counts the nums of elements
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	for (; h != NULL; h = h->next)
	{
		number++;
	}

	return (number);
}
