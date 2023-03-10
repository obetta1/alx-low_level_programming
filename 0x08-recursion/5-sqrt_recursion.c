#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 2);

		if (root == -1)
		{
			return (-1);
		}
		else if ((root * root) > n)
		{
			return (-1);
		}
		else if (root * root == n)
		{
			return (root);
		}
		else
		{
			return (root + _sqrt_recursion(n - root * root));
		}
	}
}
