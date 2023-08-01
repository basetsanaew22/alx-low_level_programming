#include "main.h"
/**
 * _strchr - this fun_ will locates a char in a string
 *@s: 1st val -char
 *@c: 2nd val - char
 *
 * Return: char with a result
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
