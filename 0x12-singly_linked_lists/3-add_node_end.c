#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A new node at the end of linked list
 * @head: Double pointer to the list_t list
 * @str: String to store in the new node
 * REturn: A new element, or NULL on allocation failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int len;

	for (len = 0; str[len]; len++)
	{

	}

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	for (;t->next; t = t->next)
	{
	}
	
	t->next = n;

	return (n);
}


