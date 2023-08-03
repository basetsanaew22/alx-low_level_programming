#include "main.h"

/**
 * factorial - Calculates the factorial of a given integer.
 * @n: The input integer
 *
 * Return: The factorial of n.
 * If an error occurs, the function returns -1 and sets errno accordingly.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
