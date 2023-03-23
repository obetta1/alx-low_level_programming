#include "function_pointers.h"
/**
 * int_indexn - a function that searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: a pointer to the function you need to use
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		exit(EXIT_SUCCESS);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}