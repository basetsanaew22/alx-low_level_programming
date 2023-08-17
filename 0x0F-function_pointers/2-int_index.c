#include "function_pointers.h"

/**
 * int_index - Returns index place if comparison is true, else -1.
 * @array: The array.
 * @size: Size of elements in array.
 * @cmp: Pointer to function of one of the 3 in main.
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
