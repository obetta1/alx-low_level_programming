#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all -a function that prints anything.
 * @format:format is a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, len = strlen(format);
	char *str;
	va_list arg1;

	va_start(arg1, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c': {
				printf("%c", va_arg(arg1, int));
				break;
				}
			case 'i': {
				printf("%d", va_arg(arg1, int));
				break;
				}
			case 'f': {
				printf("%f", va_arg(arg1, double));
				break;
				}
			case 's': {
				str = va_arg(arg1, char *);
				if (str == NULL)
					str = "nill";
				printf("%s", str);
				break;
				}
		}
		if ((format[i] == 'c' || format[i] == 's' ||
			format[i] == 'i' || format[i] == 'f') && i < len - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
