#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to be used from @src.
 *
 * Return: Pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
