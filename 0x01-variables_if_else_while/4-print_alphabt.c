#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;
	char a = 'a';

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
		{
			continue;
		}
		putchar(i + a);
	}
	putchar('\n');
	return (0);
}
