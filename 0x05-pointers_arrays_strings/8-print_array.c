#include "main.h"
#include <string.h>
/**
 * print_array - print array of int
 * @a: string
 * @n: size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0;  i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
