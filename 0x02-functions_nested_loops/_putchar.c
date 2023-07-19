#include "main.h"
#include <unistd.h>
/**
 *  _patchar - writes the character c to stdout
 *   @c: The character to print
 *
 *  Return: On success 1.
 *  on error, -1 is returned, and error is set appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
