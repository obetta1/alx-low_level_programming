#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, c;

	c = 0;

	while (c < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		c++;
		_putchar('\n');
	}
}
