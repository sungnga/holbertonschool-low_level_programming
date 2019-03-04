#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: integer type
 * @argv: char type
 * Return: 0 value integer
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
