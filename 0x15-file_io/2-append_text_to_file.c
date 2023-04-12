#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: file name
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fld;
	ssize_t writen_byte;

	if (filename == NULL)
		return (-1);
	fld = open(filename, O_APPEND);
	if (fld == -1)
		return (-1);
	if (text_content != NULL)
	{
		writen_byte = write(fld, text_content, strlen(text_content));
		if (writen_byte == -1)
		{
			close(fld);
			return (-1);
		}
	}
	close(fld);
	return (1);
}
