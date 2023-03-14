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

	size1 = sizeof(s1) * sizeof(char);
	size2 = sizeof(s2) * sizeof(char);
	tot_size = size1 + size2;
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
