#include "main.h"
#include <string.h>

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: figen number
 * Return: the length of the string
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
