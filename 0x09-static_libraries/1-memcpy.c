#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Pointer to the memory where the data will be stored.
 * @src: Pointer to the memory where the data will be copied from.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;
	unsigned int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
