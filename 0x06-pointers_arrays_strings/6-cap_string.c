#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string -  function that copies a string.
 * @s: source string
 * Return: the pointer is the dest string
 */
char *cap_string(char *s)
{
	int i, n;

	n = strlen(s);
	s[0] = toupper(s[0]);
	for (i = 0; i < n; i++)
	{
		if (s[i] == ' ' || (s[i] == '\n')
				|| s[i] == '.' || s[i] == '-' || s[i] == '\t' || s[i] == ','
				|| s[i] == ';' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || s[i] == '?')
		{
			i++;
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
