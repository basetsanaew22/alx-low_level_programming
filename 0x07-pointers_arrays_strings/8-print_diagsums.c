#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2 diagonals
 *@a: 1st val
 *@size: 2nd val -int
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0, k, l = 0;

	k = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[l];
			if (j == k)
				s2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", s1, s2);
}
