#include "lists.h"

/**
 * before_main - prints a string before main function is executed
 * @void: does not take in any arguments
 * Return: nothing
 */
void before_main(void) __attribute__ ((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
