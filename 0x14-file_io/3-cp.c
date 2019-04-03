#include "holberton.h"

/**
 * main - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
int main(int argc, char **argv)
{
	int f1, f2, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY, 0664);
	if (f1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n = read (f1, buf, 1024)) > 0)
	{
		if (write(f2, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(f1) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (close(f2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
