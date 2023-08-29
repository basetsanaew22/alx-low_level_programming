#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific index
 * in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int a;

	if (!head)
		return (NULL);

	temp = head;

	for (a = 0; a < index && temp; a++)
	{
		temp = temp->next;
	}

	return (temp ? temp : NULL);
}
