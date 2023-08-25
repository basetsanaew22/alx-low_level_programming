#include <stdio.h>
#include "lists.h"

/**
 * print_list- all element to be printed in link list
 * @h: elements of the counts
 * Return: counts of the nodes on the list
 *
 * Description: the function is used to print the data of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	for (; h != NULL; h = h->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		a++;
	}
	return (a);
}
