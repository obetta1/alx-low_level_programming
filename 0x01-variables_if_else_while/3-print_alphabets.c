#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int c = 0;

	char a = 'a';

	while (i < 26)
	{
		putchar(i + a);
		if (i == 25)
		{
			c++;
			i = -1;
			a = 'A';
		}
		i++;
		if (c == 2)
			i = 27;
	}
	putchar('\n');
	return (0);
}
