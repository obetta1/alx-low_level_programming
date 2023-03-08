#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n));
}
