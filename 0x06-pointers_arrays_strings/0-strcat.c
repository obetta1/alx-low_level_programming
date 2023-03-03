#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: duestination string
 * @src: source string
 * Return: the pointer is the dest string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
