#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The char to display
 *
 * Return: success one.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
