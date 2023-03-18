#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimuim  number to start
 * @max: maximmuim number
 * Return: pointer to thr array
 */
int *array_range(int min, int max)
{
	int *pmo, k, i;

	if (min > max)
		return (NULL);
	pmo = malloc(max * sizeof(int));
	if (pmo == NULL)
		return (NULL);
	k = 0;
	for (i = min; i <= max; i++)
	{
		*(pmo + k) = i;
	}
	return (pmo);
}
