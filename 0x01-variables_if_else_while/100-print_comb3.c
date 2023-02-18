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
		for (j = i + 1; j <= 9; j++);
		{
			int n = i * 10 + j;
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
