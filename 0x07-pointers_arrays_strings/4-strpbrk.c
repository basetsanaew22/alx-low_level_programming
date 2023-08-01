#include "main.h"
/**
 * _strpbrk - fun... to search any of the byte
 *@s: 1st val - c
 *@accept: 2nd val - c
 *
 * Return: character=result
 */
char *_strpbrk(char *s, char *accept)
{
	int k = 0;

	while (*s)
	{
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
				return (s);
			k++;
		}
		k = 0;
		s++;
	}
	return ('\0');
}
