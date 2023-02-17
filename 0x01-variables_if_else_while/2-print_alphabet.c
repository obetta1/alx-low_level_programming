#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
