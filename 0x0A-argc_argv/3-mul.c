#include <stdio.h>
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
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
