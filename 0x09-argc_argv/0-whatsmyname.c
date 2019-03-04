#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: integer type
 * @argv: char type
 * i - integer type
 * Return: 0 value integer
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", (argv[i]));
	}
	return (0);
}
