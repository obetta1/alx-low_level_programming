#include <stdio.h>
/**
 * main - prints exactly a give string
 * followed by a new line, to the standard error.
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, sizeof(message) - 1);
	return (1);
}
