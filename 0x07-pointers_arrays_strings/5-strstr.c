#include "main.h"
/**
 * _strstr - function to locate a substring.
 *@haystack: 1st value which char
 *@needle: 2st value which char
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int countings = 0, b = 0, k, j = 0, l, i = 0;
	char *p;

	while (needle[countings] != '\0')
	{
		countings++;
	}
	while (haystack[i] != '\0')
	{
		i++;
			}
	if (countings == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			l = j;
			b = 0;
			for (k = 0; k < countings; k++)
			{
				if (haystack[l] == needle[k])
					b++;
				l++;
			}
		}
		if (b == countings)
			return (p);
		j++;
	}
	return ('\0');
}
