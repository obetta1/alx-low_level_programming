#include "main.h"
#include <string.h>

/**
 * _memcpy -  function that copies a string.
 * @src: source string
 * @dest: destination
 * @n: n byte
 * Return: the pointer is the string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = memcpy(dest, src, n);

	return (c);
}
