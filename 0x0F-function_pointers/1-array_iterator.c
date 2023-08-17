#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints each array element on a new line.
 * @array: The array.
 * @size: How many elements to print.
 * @action: Pointer to function for printing in regular or hex.
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
