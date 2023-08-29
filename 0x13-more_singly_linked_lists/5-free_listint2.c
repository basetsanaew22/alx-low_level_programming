#include "lists.h"

/**
 * free_listint2 - function that free the linked list
 * @head: pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	for (; *head != NULL; *head = t)
	{
		t = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
