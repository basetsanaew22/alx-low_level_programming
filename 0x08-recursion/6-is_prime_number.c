#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @a: The number to be checked.
 * @b: The divisor that iterates from 2 to n-1.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 * -1 is returned, and errno is set appropriately.
 */
int is_prime_helper(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (is_prime_helper(a, b + 1));
}
/**
 * is_prime_number - Determines whether a number is prime.
 * @n: The input integer to be checked for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 * -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
