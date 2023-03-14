#include "main.h"
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

	if (size == 0)
		return (NULL);
	char *b = malloc(size * sizeof(unsigned int));

	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	if (b == NULL)
		return (NULL);
	return (b);
}
