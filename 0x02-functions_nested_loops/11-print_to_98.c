#include "main.h"
#include <ctype.h>
/**
 * print_to_98 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * @n: number
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
			printf(", ");
		}
	
	}
	printf("\n");
}
