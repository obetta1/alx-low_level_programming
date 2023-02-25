#include "main.h"
/**
 * print_numbers - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: 0
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
