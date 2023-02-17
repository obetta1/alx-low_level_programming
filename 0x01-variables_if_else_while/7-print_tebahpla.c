#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
