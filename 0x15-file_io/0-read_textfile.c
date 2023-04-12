#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file name
 * @letters: where letters is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fld = open(filename, O_RDONLY);
	char *buffer;
	ssize_t read_byte, writen_byte;

	if (filename == NULL)
		return (0);
	if (fld == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fld);
		return (0);
	}

	read_byte = read(fld, buffer, letters);
	if (read_byte == -1)
	{
		free(buffer);
		close(fld);
		return (0);
	}
	writen_byte = write(STDOUT_FILENO, buffer, read_byte);
	if (writen_byte == -1 || writen_byte != read_byte)
	{
		free(buffer);
		close(fld);
		return (0);
	}
	free(buffer);
	close(fld);
	return (writen_byte);
}
