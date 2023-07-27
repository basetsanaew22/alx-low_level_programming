#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add two strings representing numbers.
 * @n1: The first string.
 * @n2: The second string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: Pointer to the result string, or 0 if buffer size is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a_len = 0, b_len = 0, carry = 0, a, b, sum;

	/* Calculate lengths of n1 and n2 */
	while (n1[a_len] != '\0')
		a_len++;
	while (n2[b_len] != '\0')
		b_len++;

	/* Check if the buffer is large enough to hold the result */
	if (size_r <= a_len || size_r <= b_len)
		return (0);

	/* Initialize the result buffer */
	r[size_r - 1] = '\0';

	/* Perform addition from right to left */
	while (a_len > 0 || b_len > 0 || carry > 0)
	{
		a = (a_len > 0) ? (n1[--a_len] - '0') : 0;
		b = (b_len > 0) ? (n2[--b_len] - '0') : 0;

		sum = a + b + carry;
		carry = sum / 10;
		sum = sum % 10;

		r[--size_r] = sum + '0';
	}

	/* Skip leading zeros in the result */
	while (*r == '0' && *(r + 1) != '\0')
		r++;

	return (r);
}
