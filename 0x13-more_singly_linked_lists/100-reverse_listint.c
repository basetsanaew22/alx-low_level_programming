#include "lists.h"

/**
 * reverse_listint - Reverses the order of nodes in a linked list.
 * @head: Pointer to the first node of the list.
 *
 * This function reverses the order of nodes in the linked list pointed to by
 * @head. It modifies the next pointers to reverse the list order.
 *
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;

	return (*head);
}
