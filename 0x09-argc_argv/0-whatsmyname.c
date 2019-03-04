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

	if (argc > 0)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
