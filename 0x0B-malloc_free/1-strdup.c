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

	if (str == NULL)
		return (NULL);
	sr = strdup(str);
	if (sr == NULL)
	{
		printf("failed to allocate memory");
		return ("failed to allocate memory");
	}
	else
	{
		return (sr);
	}
}
