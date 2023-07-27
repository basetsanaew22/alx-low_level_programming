#include "main.h"
/**
 * _strncpy - concatenate strings, defining the size of 2nd str.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of 2nd str
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
