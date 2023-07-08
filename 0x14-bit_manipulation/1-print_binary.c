#include "main.h"
/**
 * print_binary - a function that returns the value of a bit at a given index.
 * @n: binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
