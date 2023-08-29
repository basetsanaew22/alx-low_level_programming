#include "lists.h"

/**
 * print_listint - shows nums of the elements of a linked list
 * @h: pointer to show nus and link to the next list
 *
 * Return: This will return all nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		number++;
	}

	return (number);
}
