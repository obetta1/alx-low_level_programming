#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator is the string to be printed between numbers
 * @n: number of argument
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg1;

	if (n == 0)
		exit(EXIT_SUCCESS);
	va_start(arg1, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg1, char *);
		if (str == NULL)
			str = "nill";
		printf("%s", str);
		if (i < n - 1 && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg1);
}
