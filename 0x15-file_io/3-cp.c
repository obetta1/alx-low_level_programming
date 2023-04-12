#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arg
 * @argv: function args
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, fr, fw;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
		exit(99);
	}
	while ((fr = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		fw = write(file_to, buffer, fr);
		if (fw != fr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
			exit(99);
		}
	}
	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", argv[1]);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
