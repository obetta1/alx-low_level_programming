#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: duestination string
 * @src: source string
 * Rrturn: the pointer is the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
