#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - print_last_digit of a number,
 * followed by a new line.
 * @n: The character to check
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int num = n % 10;
	printf("%d", num);
	return (num);
}
