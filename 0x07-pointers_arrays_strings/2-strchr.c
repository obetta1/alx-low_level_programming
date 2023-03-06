#include "main.h"
#include <string.h>

/**
 * *_strchr - a function that locates a character in a string.
 * @s: source string
 * @c: constant byte
 * Return: the pointer is the string
 */
char *_strchr(char *s, char c)
{
	char *a = strchr(s, c);

	return (a);
}
