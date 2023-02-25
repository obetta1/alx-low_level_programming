#include "main.h"
/**
 * print_line - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: 0
 * @n: numbers of line.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
