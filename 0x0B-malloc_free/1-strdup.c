#include "main.h"
#include <string.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: sorce string
 * Return: pointer to ther new string
 */
char *_strdup(char *str)
{
	char *sr;

	sr = strdup(str);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (sr == NULL)
	{
		return ("failed to allocate memory");
	}
	else
	{
		return (sr);
	}
}
