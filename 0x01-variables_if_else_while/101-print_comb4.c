#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * starting from 0, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if ((((i * 10 + j) * 10) + k) < 789)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
