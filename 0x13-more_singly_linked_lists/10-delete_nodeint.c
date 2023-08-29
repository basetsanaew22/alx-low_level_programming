#include "lists.h"

/**
 * delete_nodeint_at_index - Remove a node from a linked list at a given index.
  * @head: Pointer to the first element in the list.
  * @index: Index of the node to be removed.
  *
  * This function removes a node from the linked list at the specified index.
  *
  * Return: 1 on success, or -1 on failure.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *prev;

	if (!head || !(*head))
		return (-1);

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (!current)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
