#include "main.h"

/**
 * _puts_recursion - Displays a string followed by a newline.
 * @s: The string to be printed.
 *
 * Return: None (void function).
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
