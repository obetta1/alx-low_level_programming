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
	for (i = len - 1;  i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
