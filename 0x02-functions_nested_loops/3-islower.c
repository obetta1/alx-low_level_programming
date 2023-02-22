#include "main.h"
#include <ctype.h>
/**
 * _islower - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
