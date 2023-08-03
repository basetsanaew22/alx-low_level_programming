#include "main.h"

/**
 * get_string_length - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 * -1 is returned, and errno is set appropriately.
 */
int get_string_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + get_string_length(str + 1));
}
/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @str: The input string to be checked.
 * @length: The length of the string.
 *
* Return: 1 if the string is a palindrome, 0 otherwise.
 * -1 is returned, and errno is set appropriately.
 */

int is_palindrome_helper(char *str, int length)
{
	if (*str != *(str + length))
		return (0);
	else if (*str == '\0')
		return (1);
	return (is_palindrome_helper(str + 1, length - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int length = get_string_length(s);

	return (is_palindrome_helper(s, length - 1));
}
