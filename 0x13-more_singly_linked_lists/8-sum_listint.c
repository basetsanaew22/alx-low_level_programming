#include "lists.h"

/**
 * sum_listint - computes the sum of all elements in a listint_t linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	for (; t != NULL; t = t->next)
	{
		sum += t->n;
	}

	return (sum);
}
