#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a specified range.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the new integer array, NULL if an error occurs.
 */
int *array_range(int min, int max)
{
	int *result;
	int i = 0, array_size;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;

	result = malloc(sizeof(int) * array_size);

	if (result == NULL)
		return (NULL);

	while (min <= max)
	{
		result[i] = min;
		i++;
		min++;
	}

	return (result);
}
