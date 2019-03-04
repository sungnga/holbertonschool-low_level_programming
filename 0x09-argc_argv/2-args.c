#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: char type
 * i - integer type
 * Return: 0 value integer
 */
int main(int argc, char *argv[])
{
	(void)argv;
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
