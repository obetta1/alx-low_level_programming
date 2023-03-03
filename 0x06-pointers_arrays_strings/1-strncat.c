#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: duestination string
 * @src: source string
 * @n: size
 * Rrturn: the pointer is the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
