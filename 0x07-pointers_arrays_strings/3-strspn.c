#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: source string
 * @accept: constant byte
 * Return: the pointer to the string
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = strspn(s, accept);

	return (c);
}
