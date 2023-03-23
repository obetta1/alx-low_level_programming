#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: separator is the string to be printed between numbers
 * @n: number of argument
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg1;

	if (n == 0)
		exit(EXIT_SUCCESS);
	va_start(arg1, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg1, int));
		if (i < n - 1 && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg1);
}
