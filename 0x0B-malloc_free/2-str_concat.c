#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: second string
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, tr, size1, size2, tot_size;

	char *mo;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	tot_size = size1 + size2 + 1;
	mo = malloc(tot_size);
	if (size1 <= size2)
	{
		tr = size2;
	}
	else
	{
		tr = size1;
	}
	for (i = 0; i < tr; i++)
	{
		if (i < size1)
			mo[i] = s1[i];
		if (i < size2)
			mo[size1 + i] = s2[i];
	}
	return (mo);
}
