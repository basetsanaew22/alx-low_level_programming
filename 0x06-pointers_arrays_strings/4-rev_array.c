#include "main.h"
/**
 * reverse_array - prints reverse arr.
 * @a: array to be compared.
 * @n: size of arr.
 * Return: reversed arr.
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
