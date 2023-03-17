#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: second string
 * @n: n byte
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, tr, sz, size1, size2, tot_size;

	char *mo;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	if (n >= size2)
		sz = size2;
	else
		sz = n;
	tot_size = size1 + size2 + 1;
	mo = malloc(tot_size);
	if (mo == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	if (size1 <= size2)
		tr = size2;
	else
		tr = size1;
	for (i = 0; i < tr; i++)
	{
		if (i < size1)
			mo[i] = s1[i];
		if (i < sz)
			mo[size1 + i] = s2[i];
	}
	return (mo);
}
