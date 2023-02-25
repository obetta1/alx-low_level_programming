#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * followed by a new line.
 * @size: numbers of line.
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (k = i; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
