#include "main.h"
#include <string.h>

/**
 * reverse_array -  function that copies a string.
 * @a: array
 * @n: size
 * Return: the pointer is the dest string
 */
void reverse_array(int *a, int n)
{
	int i, j, k, b[n];
	for (i = n - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (k = 0; k <= n - 1; k++)
	{
		a[k] = b[k];
		printf("%d", a[k]);
	}
}
