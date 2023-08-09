#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be found.
 *
 * Return: Pointer to the first occurrence of the substring @needle
 * in the string @haystack, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
