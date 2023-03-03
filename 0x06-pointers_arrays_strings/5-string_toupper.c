#include "main.h"
#include <string.h>

/**
 * string_toupper -  function that copies a string.
 * @s: source string
 * Return: the pointer is the dest string
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
