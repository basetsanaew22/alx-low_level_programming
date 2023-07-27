#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of 2nd str.
 * @dest: str with concatenation
 * @src: str to be concatenated
 * @n: size of 2nd str
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	s = 0;

	while (*(dest + d) != '\0')
		d++;

	while (*(src + s) != '\0' && d < 97 && s < n)
	{
		*(dest + d) = *(src + s);
		d++;
		s++;
	}
	*(dest + d) = '\0';
	return (dest);
}
