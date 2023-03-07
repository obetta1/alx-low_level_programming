#include "main.h"
#include <string.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	
	int sum1 = 0;

	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for ( j =  0; j < size; j++)
		{
			if(i == j){
				sum1 = sum1 + a[i][j];
			}
			if (i + j == size - 1){
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d,\t", sum1);
	printf("%d", sum2);
}
