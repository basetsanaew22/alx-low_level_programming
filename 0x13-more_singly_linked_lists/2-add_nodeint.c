#include "lists.h"

/**
 * add_nodeint - Adds the new node to the start of a linked list.
 * @head: Pointer to the first node of the list.
 * @n: Data to be inserted into the new node.
 *
 * Return: Pointer to the new node, or NULL on allocation failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
