#include "main.h"
#include <stdio.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: pointer to thr string
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
