#include "main.h"
#include <ctype.h>
/**
 * _isdigit - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * @c: The character to check
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
