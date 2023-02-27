#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = len/2;  i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
