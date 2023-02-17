#include <stdio.h>
/**
 * main - prints all single digit numbers of base 16
 * starting from 0, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 54; i++)
	{
		if (i == 10)
		{
			i = 49;
		}
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
