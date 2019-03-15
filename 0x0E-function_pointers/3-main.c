#include "3-calc.h"

/**
 * op_add - prints the result of the operation, followed by new line
 * @argc: counter for number arguments
 * @argv: pointer to the value of the input numbers
 * Return: integer type
 */
int main(int argc, char **argv)
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Error\n");
		exit (99);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
