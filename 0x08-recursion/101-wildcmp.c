#include "main.h"

/**
 * wildcmp - Compares two strings
 * and returns 1 if they can be considered identical,
 * otherwise returns 0.
 * @s1: The first string to compare.
 * @s2: The second string with wild character.
 *
* Return:  1 if the strings are considered identical, 0 otherwise.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
