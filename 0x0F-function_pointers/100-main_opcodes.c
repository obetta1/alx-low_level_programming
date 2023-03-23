#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @num_bytes: number of bytes
 * Return: Always 0
 */
void print_opcodes(int num_bytes);
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(-1);
	}
	int i, num_bytes;

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(num_bytes);
	return (0);
}
/**
 * print_opcodes - This function uses a pointer to the main function
 * @num_bytes: number of bytes
 *
 * Return: nothing
 */
void print_opcodes(int num_bytes)
{
	unsigned char *main_func = (unsigned char *) &main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_func + i));
	}
	printf("\n");
}
