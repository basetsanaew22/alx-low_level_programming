#include <stdio.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in the linked list
 * @h: Pointer to the list_t linked list
 *
 * Return: The number of elements in the linked list pointed to by 'h'
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;
	
	for (; h != NULL; h = h->next)
	{
		a++;
	}
	return (a);
}
