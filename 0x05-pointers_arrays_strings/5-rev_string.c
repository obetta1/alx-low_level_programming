#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i, len;

	len = strlen(s);
	puts(s);
	for (i = len;  i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
