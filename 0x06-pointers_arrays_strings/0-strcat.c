#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: str with concatenation
 * @src: str to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	s = 0;

	while (*(dest + d) != '\0')
		d++;

	while (*(src + s) != '\0' && d < 97)
	{
		*(dest + d) = *(src + s);
		d++;
		s++;
	}
	*(dest + d) = '\0';
	return (dest);
}
