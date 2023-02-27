#include "main.h"
#include <string.h>
/**
 * puts2 - print strin
 * @str: string
 *
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0;  i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
