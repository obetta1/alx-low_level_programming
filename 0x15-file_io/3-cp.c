#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arg
 * @argv: function args
 * Return: 0
 * _dprintf - print to the STDERR_FILENO
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
		_dprintf("Error: Can't read from file", 98, argv[1]);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
		_dprintf("Error: Can't write to", 99, argv[2]);
	while ((fr = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		fw = write(file_to, buffer, fr);
		if (fw != fr)
			_dprintf("Error: Can't write to", 99, argv[2]);
	}
	if (fr == -1)
		_dprintf("Error: Can't read from file", 98, argv[1]);
	if (close(file_from) == -1)
		_dprintf("Error: Can't close", 100, argv[1]);
	if (close(file_to) == -1)
		_dprintf("Error: Can't close", 100, argv[2]);
	return (0);
}
/**
 * _dprintf - print to the STDERR_FILENO
 * @msg: error message
 * @exit_code: exit code
 * @arg: file name
 */
void _dprintf(char *msg, int exit_code, char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	exit(exit_code);
}
