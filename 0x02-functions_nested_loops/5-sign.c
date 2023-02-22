#include "main.h"
#include <ctype.h>
/**
 * print_sign - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * @n: The character to check
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
