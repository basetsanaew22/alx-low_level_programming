#include "lists.h"

/**
 * pop_listint - Removes the first node from a linked list.
 * @head: Pointer to the pointer of the first element in the linked list.
 *
 * Return: The data stored in the removed element, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int num = 0;

	if (head && *head)
	{
		listint_t *temp = *head;

		num = temp->n;
		*head = temp->next;
		free(temp);
	}
	return (num);
}
