#include "main.h"

/**
 * sqrt_helper - Helper function to find the square root of a number.
 * @a: The number whose square root is to be found.
 * @b: The number that iterates from 1 to n to find the square root.
 *
 * Return: The sqr rt of n if fnd, otherwise -1 is rtrd, and errn is set appro.
 */
int sqrt_helper(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt_helper(a, b + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The input number for which the square root is to be found.
 *
 * Return: On success, the square root of n is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
