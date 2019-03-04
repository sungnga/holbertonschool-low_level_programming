#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: integer type
 * @argv: char type
 * i - integer type
 * sum - integer type
 * Return: 0 value integer
 */
int main(int argc, char *argv[])
{
	(void)argv;
	int i;
	int sum;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
	       		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
