#include "main.h"
#include <string.h>

/**
 * _strncpy -  function that copies a string.
 * @dest: duestination string
 * @src: source string
 * @n: size
 * Return: the pointer is the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
