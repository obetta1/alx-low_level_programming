#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - funtion that print its name
 * @argc: number of argument
 * @argv: the array of string argument
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int i, sum;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
