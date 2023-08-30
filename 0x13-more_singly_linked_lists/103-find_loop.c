#include "lists.h"

/**
 * find_listint_loop - finds the loop.
 * @head: search linked list
 *
 * Return: address node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sluggish = head;
	listint_t *rush = head;

	if (!head)
		return (NULL);

	while (sluggish && rush && rush->next)
	{
		rush = rush->next->next;
		sluggish = sluggish->next;
		if (rush == sluggish)
		{
			sluggish = head;
			while (sluggish != rush)
			{
				sluggish = sluggish->next;
				rush = rush->next;
			}
			return (rush);
		}
	}

	return (NULL);
}
