#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Creates and inserts a new node at the beginning of a linked list
 * @head: Pointer to a pointer to the list_t linked list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len;

	for (len = 0; str[len]; len++)
	{
	}
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
