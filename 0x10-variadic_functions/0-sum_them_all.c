#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of argument
 * Return: the sum of perameter
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg1;

	if(n == 0)
		return (0);
	va_start(arg1, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg1, int);
	}
	return (sum);
}
