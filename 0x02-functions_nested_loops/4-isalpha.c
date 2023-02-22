#include "main.h"
#include <ctype.h>
/**
 * _isalpha - cheks if the c is alphabet,
 * followed by a new line.
 * @c: The character to check
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
