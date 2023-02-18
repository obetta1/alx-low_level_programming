#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * starting from 0, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, g;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (g = 0; g <= 9; g++)
				{
					if((i == 0 && j == 0 && k == 0 && g == 0) || (i * 10 + j) == (k * 10 + g) ||
							(((i * 10 + j) == 98) && ((k * 10 + g) < 99)))
						continue;
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(g + 48);
					if ((i * 10 + j) < 98)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
