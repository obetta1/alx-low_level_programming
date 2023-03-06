#include "main.h"
#include <string.h>

/**
 * *_strstr - a function that locates a substring.
 * @needle:substring string
 * @haystack: constant byte
 * Return: the pointer to the string
 */
char *_strstr(char *haystack, char *needle)
{
	char *c = strstr(haystack, needle);

	return (c);
}
