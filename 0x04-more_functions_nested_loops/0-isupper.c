#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character.,
 * followed by a new line.
 * @c: The character to check
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
