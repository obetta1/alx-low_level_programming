#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimuim  number to start
 * @max: maximmuim number
 * Return: pointer to thr array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	arr = malloc(max * sizeof(int));
	size = max - min + 1;
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			arr[i] = min + i;
	}
	return (arr);
}
