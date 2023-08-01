#include "main.h"
/**
 * _memcpy - function to copies memory area
 *@dest: this is the address of memory to be printed
 *@src: this 2nd value is a pointer which will be assigned to dest ptr
 *@n: this 3rd value will be use in comparizon with loop value
 *
 * Return: character with the res ov memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
