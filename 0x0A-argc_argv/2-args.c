#include <stdio.h>
/**
 * main - funtion that print its name
 * @argc: number of argument
 * @argv: the array of string argument
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
