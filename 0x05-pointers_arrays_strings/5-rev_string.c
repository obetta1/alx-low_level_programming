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

	puts(s);
	len = strlen(s);
	for (i = len - 1;  i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
