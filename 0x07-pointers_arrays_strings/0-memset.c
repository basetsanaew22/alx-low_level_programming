#include "main.h"
/**
 * _memset - this function will be used to fill memo with a const
 *@s: this is the 1st value
 *@b: this is the 2nd value
 *@n: this is the 3rd value
 *
 * Return: character with result ov memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
