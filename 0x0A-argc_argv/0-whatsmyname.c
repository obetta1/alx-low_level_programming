#include <stdio.h>
/**
 * main - funtion that print its name
 * @argc: number of argument resent
 * @argv: the array of string argument
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	printf("%s\n", argv[0]);
	return (0);
}
