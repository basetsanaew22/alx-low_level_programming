#include "lists.h"

/**
 * free_listint_safe - will free a linked list
 * @h: pointer to the first node.
 *
 * Return: all elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);

	for (; *h != NULL; *h = t)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
