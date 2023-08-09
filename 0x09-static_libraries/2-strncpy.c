#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Number of characters to copy.
 *
 * Return: Pointer to the destination buffer @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
