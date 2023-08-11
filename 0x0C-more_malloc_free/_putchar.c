#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes
 * @c: The character
 *
 * Return:1.
 * On error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
