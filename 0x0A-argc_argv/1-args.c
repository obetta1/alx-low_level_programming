#include <stdio.h>
/**
 * main - funtion that print its name
 * @argc: number of argument
 * @argv: the array of string argument
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	printf("%d\n", argc - 1);
	return (0);
}
