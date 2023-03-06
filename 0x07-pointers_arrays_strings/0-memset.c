#include "main.h"
#include <string.h>

/**
 * _memset -  function that copies a string.
 * @s: source string
 * @b: constant byte
 * @n: n byte
 * Return: the pointer is the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *c = memset(s, b, n);

	return (c);
}
