#include "main.h"
/**
 * print_diagonal - function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: numbers of line.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
