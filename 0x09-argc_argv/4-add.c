#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: char type
 * i - integer type
 * j - integer type
 * sum - integer type
 * Return: 0 value int type
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 0)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
