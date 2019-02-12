#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: is integer type
 * Return: r in integer value
 */
int _abs(int r)
{
	if (r > 0)
		return (r);
	else
	{
		(r = r * -1);
		return (r);
	}
}
