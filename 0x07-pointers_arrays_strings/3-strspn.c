#include "main.h"
/**
 * _strspn - this funct will get de length of a prefix substr
 *@s: this is the 1st value -character
 *@accept: 2nd - character
 *
 * Return: character with its result
 */
unsigned int _strspn(char *s, char *accept)
{
	int l = 0, k = 0;
	unsigned int a = 0;

	while (s[k] != ' ' && s[k] != '\0')
	{
		while (accept[l] != '\0')
		{
			if (s[k] == accept[l])
				a++;
			l++;
		}
		k++;
		l = 0;
	}
	return (a);
}
