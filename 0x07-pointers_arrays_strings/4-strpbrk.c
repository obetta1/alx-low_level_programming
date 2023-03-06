#include "main.h"
#include <string.h>

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: source string
 * @accept: constant byte
 * Return: the pointer to the string
 */
char *_strpbrk(char *s, char *accept)
{
	char *c = strpbrk(s, accept);

	return (c);
}
