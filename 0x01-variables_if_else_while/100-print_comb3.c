#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * starting from 0, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if ((i * 10 + j) < 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
