#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of strings containing the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (a = 0; *argv; a++, argv++)
			;

		printf("%d\n", a - 1);
	}

	return (0);
}
