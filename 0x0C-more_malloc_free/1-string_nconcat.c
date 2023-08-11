#include "main.h"

/**
 * string_nconcat - Concatenates two strings using at most
 * an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate to s1.
 *
 * Return: If memory allocation fails - NULL.
 *         Otherwise - a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len_s1 = 0, len_s2 = 0, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	concat = malloc(sizeof(char) * (len_s1 + n + 1));

	if (concat == NULL)
		return (NULL);

	while (*s1)
		concat[index++] = *s1++;

	while (*s2 && n--)
		concat[index++] = *s2++;

	concat[index] = '\0';

	return (concat);
}
