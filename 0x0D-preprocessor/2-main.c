#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that prints the name of the
 * file it was compiled from, followed by a new line.
 * Return: always returns 0
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
