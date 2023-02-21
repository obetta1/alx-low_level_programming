#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 *
 * Returns: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
