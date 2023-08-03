#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a given string.
 * @s: The input string
 *
 * Return: The length of the string.
 * If an error occurs, the function returns -1 and sets errno accordingly.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
