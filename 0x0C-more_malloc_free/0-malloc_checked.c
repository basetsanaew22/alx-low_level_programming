#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc,
 * exits with code 98 if it fails.
 * @b: Size of the memory block to be allocated.
 *
 * Return: Pointer to the address of the memory block.
 */
void *malloc_checked(unsigned int b)
{
	void *impede;

	impede = malloc(b);
	if (impede == NULL)
		exit(98);
	return (impede);
}
