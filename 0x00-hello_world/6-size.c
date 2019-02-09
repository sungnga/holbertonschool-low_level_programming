#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * int - interger type
 * long int - long interger type
 * long long int - long long integer type
 * flot - float type
 * Return: zero integer value
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n",
	       sizeof(longlongintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
