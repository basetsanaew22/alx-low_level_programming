#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
